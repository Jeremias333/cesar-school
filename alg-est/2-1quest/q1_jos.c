#include "stdlib.h"
#include "stdio.h"
#include "operaArray.h"

int array[];

void create_array(){


    //pedir o array de números ao usuário por aqui
}

int main(void){

    create_array();

    int loop = 1;
    char choice = ' ';

    while(1){
        printf("Escolha uma das opções abaixo:\nR - Inverter a lista\nE - Contar elemento\nU - Elementos únicos\nD - Deletar uma posição\nS - Sair\n");
        scanf("%c", &choice);
        
        if(choice == 'R' || choice == 'r'){

        }else if(choice == 'E' || choice == 'e'){

        }else if(choice == 'U' || choice == 'u'){

        }else if(choice == 'D' || choice == 'd'){

        }else if(choice == 'S' || choice == 's'){

        }else{
            printf("Opção inválida...");
        }


    }
    
    return 0;
}