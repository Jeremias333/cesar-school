#include <stdio.h>

//função que soma 10 ao valor recebido
void soma10(int *x){
    *x = *x + 10;
    return;
}

int main(void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O número digitado foi: %d \n", numero);

    soma10(&numero);

    printf("Agora o número vale: %d \n", numero);
    return 0;

}