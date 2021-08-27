#include <stdio.h>

int main(){
    char in[3];

    //scanf(" %s", in);
    gets(in);

    printf("%c %c", in[0], in[2]);

    int line = in[0] - '0';
    int col = in[2] - '0';

    int matrix[line][col];

    printf("linha: %d\n", line);
    printf("coluna: %d\n", col);
    
    
}