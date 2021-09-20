#include <stdlib.h>
#include <stdio.h>

struct tabelaAluno{
    //utilizando os tipos redefinidos dentro da struct
    int matricula;
    float prova1;
    float prova2;
};

//redefinindo a struct para encurtar o comando de declaração
typedef struct tabelaAluno tabelaAluno;

int main (void){
    //Declarando a variavel aluno do tipo tabelaAluno porque não precisa mais do struct na frente.
    tabelaAluno aluno;

    float media = 0;

    printf("Informe o número de matrícula: ");
    scanf("%d", &aluno.matricula);

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &aluno.prova1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f", &aluno.prova2);

    media = (aluno.prova1 + aluno.prova2)/2;

    printf("\nMatricula do aluno: %d\n", aluno.matricula);
    printf("Média do aluno: %.2f\n", media);
}