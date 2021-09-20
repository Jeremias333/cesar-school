#include <stdio.h>
#include <stdlib.h>

/*
    para passar um vetor para uma função usando linguagem C utiliza-se um ponteiro como paramêtro da função.
    Ao usarmos o ponteiro como parâmetro, na realidade estamos passando o endereço inicial do vetor e não seus elementos.
*/

//protótipo da função média
float media(int n, float *vnotas);

int main(void){
    float vnotas[2];
    float mediaNotas;
    int i;

    for (i = 0; i < 2; i++){
        printf("Digite o valor da %dº nota: ", i);
        scanf("%f", &vnotas[i]);
    }

    //chamando função
    mediaNotas = media(2, vnotas);

    printf("\nMédia = %1.f \n", mediaNotas);

    getchar();
    return 0;
}

float media(int n, float *vnotas){
    int i;
    float media = 0, soma = 0;

    for(i = 0; i < n; i++){
        soma = soma + vnotas[i];
    }

    media = soma / n;

    return media;
}