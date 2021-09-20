#include <stdio.h>
#include <stdlib.h>

//usando typedef na struct para encurtar o comando de declaração
typedef struct{
    int matricula;
    float nota;
} tabelaAluno;

int main (void){
    tabelaAluno aluno1;

    //pontAluno é um ponteiro do tipo aluno, recebe o endereço de aluno1
    tabelaAluno *pontAluno = &aluno1;

    aluno1.matricula = 1333;
    aluno1.nota = 8.0;

    printf("Matricula: %d\nnota: %.2f\n", aluno1.matricula, aluno1.nota);

    //podemos atribuir ou acessar um valor de um ponteiro utilizando parenteses
    (*pontAluno).nota = 8.5;
    
    printf("\nNota do aluno de matricula: %d, foi atualizando para: %.2f\n", (*pontAluno).matricula, aluno1.nota);

    //pontAluno-> substitui a notação (*pontAluno)
    //atribuindo um novo valor utilizando pontAluno->

    pontAluno->nota = 5.0;

    printf("\nNota do aluno de matricula: %d, foi atualizando para: %.2f\n", (*pontAluno).matricula, aluno1.nota);


    return 0;
}

