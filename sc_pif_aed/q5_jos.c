#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"


int convert(long long n) {
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
}

int main(void){
    int qtd_bets = 0;
    int winners = 0;
    int col = 10;
    char string[20];

    scanf("%d", &qtd_bets);

    int gamblermen[qtd_bets][col];

    for(int i = 0; i < qtd_bets+1; i++) {
        gets(string);
        for(int j = 0; j < strlen(string); j++){
            
            if(string[j]==','){
                char temp_char[2];
                // j++;
                printf(" %c\n", string[j]);
                temp_char[0] = string[j];
                // temp_char[1] = line[index+1];
                // printf("\n%c", line[index]);
                if(temp_char[0] == ','){
                    if(j - 1 >= 9){
                        temp_char[0] = string[j-2];
                        temp_char[1] = string[j-1];
                        gamblermen[i][j] = convert(strtol(temp_char, NULL, 10));
                        printf("\nnumero da conta: %d\n", gamblermen[i][j]);
                        // break;
                    }else{
                        gamblermen[i][j] = (string[0]-'0');
                        printf("\nnumero da conta: %d", gamblermen[i][j]);
                    }
                    
                }
            }

            

            // scanf("%d",  &gamblermen[i][j]);
        }
    }

    // for(int i = 0; i < qtd_bets; i++) {
    //     for(int j = 0; j < col; j++){
    //         printf(" %d",  gamblermen[i][j]);
    //     }
    // }

    return 1;
}

int ** create_bets(int size){
    int col = 10;
    int row = size;
    int **array = malloc(sizeof(int[row][col]));

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++){
            scanf("%d",  &array[i][j]);
        }
    }

    return array;
}