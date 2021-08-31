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

    // printf("linha: %d\n", line);
    // printf("coluna: %d\n", col);
    
    for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            // printf("linha: %d \ncoluna: %d", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // for(int i = 0; i < line; i++){
    //     for(int j = 0; j < col; j++){
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
}