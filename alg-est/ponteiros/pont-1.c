//Muito utilizado na alocação dinâmica de matrizes

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, *ptrx, **pptrx;

    //inicializando a variavel com zero;
    x = 0;
    printf("\nvalor de x = %d\n", x);
    printf("Endereço de x: %x\n\n", &x);

    //Atribuindo os endereços para os ponteiros
    ptrx = &x; //ptrx aponta para x
    pptrx = &ptrx; //pptrx aponta para ptrx

    *ptrx = 10;//alterando valor de X pelo ponteiro de memória ptrx
    printf("\nvalor de x = %d", x);
    printf("\nEndereço apontado por ptrx: %x", ptrx);
    printf("\nValor da variável X que esta sendo apontada por ptrx: %d", *ptrx);
    printf("\nEndereço de memoria da variavel ptrx %x\n", &ptrx);


    **pptrx = 13;
    printf("\nValor atual de x: %d", x);
    printf("\nEndereço apontado por **pptrx: %x", pptrx);
    printf("\nValor da variável para a qual pptrx faz referência: %d", **pptrx);// pptrx está apontando para ptrx
    printf("\nEndereço de memória da variável **pptrx: %x\n", &ptrx);

    // system("PAUSE"); //no GCC tem que ser em maiusculo
    getchar();//pausa nosso código
    return 0;
}