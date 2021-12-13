#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void){
    int qtd_bets = 0;
    int winners = 0;
    int col = 11;
    char string[21];
    char prize_number[21];
    int lucky_numbers[7];

    scanf("%d", &qtd_bets);

    int gamblermen[qtd_bets][col];

    for(int i = 0; i < qtd_bets; i++) {
        scanf(" %s", string);

        //irá substituir o col, já que o indice j irá ficar em constante movimento.
        int cont = 0;

        //settando -1 em todos valores não preenchidos do array
        for(int j = 0; j < strlen(string); j++){
            gamblermen[i][j] = -1;
        }

        for(int j = 0; j < strlen(string); j++){
            if(string[j]==','){
                char temp_char[2];
                if((string[j+2]-'0') >= 0){
                    temp_char[0] = string[j+1];
                    temp_char[1] = string[j+2];
                    gamblermen[i][cont] = ((temp_char[0]-'0')*10)+temp_char[1]-'0';
                    j+=2;
                }else{
                    gamblermen[i][cont] = (string[j+1]-'0');
                    j++;
                }
            }else{
                gamblermen[i][cont] = (string[j]-'0');
            }
            cont++;
        }
    }

    while ((getchar()) != '\n');

    fgets(prize_number, 21, stdin);

    int cont = 0;

    for(int i = 0; i < 7; i++){
        lucky_numbers[i] = -1;
    }

    char tmp[21];
    int i;
    int j;
    for(i=0;prize_number[i];i++){
        j=0;
        while(prize_number[i]>='0' && prize_number[i]<='9'){
            tmp[j]=prize_number[i];
            i++;
            j++;
        }
        tmp[j]=0;
        long a = strtol(tmp, NULL, 10);
        lucky_numbers[cont] = a;

        cont++;
    }

    for(int i = 0; i < qtd_bets; i++) {
        int cont_lucky_numbers = 0;
        for(int j = 0; j < col; j++){
            for(int index = 0; index < 7; index++){
                if(lucky_numbers[index] == -1 || gamblermen[i][j] == -1){
                    break;
                }
                if(lucky_numbers[index] == gamblermen[i][j]){
                    cont_lucky_numbers++;
                }
            }
        }
        if(cont_lucky_numbers >= 6){
            winners++;
        }
    }

    printf("Total de ganhadores: %d", winners);

    return 0;
}