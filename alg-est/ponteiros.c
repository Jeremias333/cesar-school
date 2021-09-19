#include <stdio.h>
#include <stdlib.h>

int main(void){
    //valor é a variavel que será apontada pelo ponteiro
    int valor = 13;

    //declaração de variável ponteiro
    int *ptr;

    //atribuindo o endereço da variável valor ao ponteiro
    ptr = &valor;

    printf("Utilizando ponteiros\n\n");
    printf("Conteúdo da variável valor: %d\n", valor);
    printf("Endereço da variavel valor: %x\n", &valor);
    printf("Conteúdo da variavel ponteiro ptr: %x\n\n", ptr);
    printf("Valor dentro do ptr: %d\n\n", &ptr);

    // getch();
    return(0);
}