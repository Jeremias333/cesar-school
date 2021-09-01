#include <stdio.h>

int main(){
    char in[3];

    //scanf(" %s", in);
    gets(in);

    int line = in[0] - '0';
    int col = in[2] - '0';

    // int sizeMatrix = line*col;

    // printf("tamanho matriz: %d\n", sizeMatrix);

    int matrix[line][col];
    int primaryValue = 0;
    int secondaryValue = 0;
    int downZero = 0;
    int upZero = 0;

    // printf("linha: %d\n", line);
    // printf("coluna: %d\n", col);
    
    for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            // printf("linha: %d \ncoluna: %d", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matriz formada:\n");
    for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] > 0){
                upZero++;
            }
            if(matrix[i][j] < 1){
                downZero++;
            }

            if(j+1 == col){
                printf("%d", matrix[i][j]);
            }else{
                printf("%d ", matrix[i][j]);
            }   
        }
        printf("\n");
    }
    if(line == col){
        for(int i = 0; i < line; i++){
            for(int j = 0; j < col; j++){
                if(i == j){
                    primaryValue += matrix[i][j];
                }
                if (j == (col-1-i)){
                    secondaryValue += matrix[i][j];
                }
            }
        }
        printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", primaryValue, secondaryValue);
    }else{
        printf("A diagonal principal e secundaria nao pode ser obtida.\n");
    }

    
    printf("A matriz possui %d numero(s) menor(es) que zero.\n", downZero);
    printf("A matriz possui %d numero(s) maior(es) que zero.\n", upZero);
}