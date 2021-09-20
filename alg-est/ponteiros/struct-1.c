#include <stdio.h>

int main (void){
    
    struct fichaAluno {
        char nome[40];
        int numero;
        float nota;
    };//definição da struct

    struct fichaAluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o número do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);


    printf("Nome do Aluno: %s", aluno.nome);
    printf("Número do Aluno: %d\n", aluno.numero);
    printf("Nota do Aluno: %.2f\n", aluno.nota);

    return 0;
}