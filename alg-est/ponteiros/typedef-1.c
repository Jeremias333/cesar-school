#include <stdio.h>
#include <stdlib.h>

int main(void){
    //redefinindo o nome do tipo float para nota
    typedef float nota;

    //declarando variaveis usando o tipo de dado renomeado
    nota prova1 = 0, prova2 = 0, media = 0;

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &prova1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f", &prova2);

    media = prova1 + prova2 / 2;

    printf("\nMédia do aluno é: %.2f\n", media);
}