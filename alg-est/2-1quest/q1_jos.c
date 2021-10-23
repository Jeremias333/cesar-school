#include "stdlib.h"
#include "stdio.h"
#include "operaArray.h"

int* create_array(){
    int size = 0;

    printf("Digite o tamanho do seu array: ");
    scanf("%d", &size);

    int * array = (int *) calloc (size, sizeof (int));

    for(int index = 0; index < size; index++) {
        scanf("%d",  &array[index]);
    }

    return array;
}

int main(void){

    int *array = create_array();

    // printf("%d ", array[0]);

    int loop = 1;
    char choice;

    while(loop){
        
        printf("Escolha uma das opções abaixo:\nR - Inverter a lista\nE - Contar elemento\nU - Elementos únicos\nD - Deletar uma posição\nS - Sair\n");
        // choice = getchar();
        // fflush(stdin);
        scanf(" %c", &choice);
        // printf("%c", choice);

        if(choice == 'R' || choice == 'r'){

        }else if(choice == 'E' || choice == 'e'){

        }else if(choice == 'U' || choice == 'u'){

        }else if(choice == 'D' || choice == 'd'){

        }else if(choice == 'S' || choice == 's'){
            exit(0);
        }else{
            system("clear");
            printf("Opção inválida...\n");
        }
    }

    return 0;
}