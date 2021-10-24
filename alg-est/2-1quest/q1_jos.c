#include "stdlib.h"
#include "stdio.h"
#include "operaArray.h"

FILE *myFile;

int write_file(){
    char choice;
    printf("\nDeseja escrever no arquivo o resultado? \nS - Sim\nN - Não\n");
    scanf(" %c", &choice);

    if (choice == 'S' || choice == 's'){
        return 1;
    }else{
        return 0;
    }
}

void addToOutput(char text){
    myFile = fopen("resultados.txt", "a");
    fprintf(myFile, "%c", text);
    fclose(myFile);
}

int* create_array(int size){
    int * array = malloc(size * sizeof(int));

    for(int index = 0; index < size; index++) {
        printf("Digite o %dº valor: ", index+1);
        scanf("%d",  &array[index]);
    }

    return array;
}

int main(void){
    int size = 0;

    //limpando documento de relatório
    myFile = fopen("resultados.txt", "w");
    fprintf(myFile, "%s", "");
    fclose(myFile);

    printf("Digite o tamanho do seu array: ");
    scanf("%d", &size);

    int *array = create_array(size);

    int loop = 1;
    char choice;

    while(loop){
        
        printf("\nEscolha uma das opções abaixo:\nR - Inverter a lista\nE - Contar elemento\nU - Elementos únicos\nD - Deletar uma posição\nS - Sair\n");
        scanf(" %c", &choice);

        if(choice == 'R' || choice == 'r'){
            myFile = fopen("resultados.txt", "a");
            
            array = newReverse(array, size);
            char value;
            printf("Valores reverso: ");
            for(int i = 0; i < size; i++){
                printf("%d ", array[i]);
            }
            
            if(write_file() == 1){
                fprintf(myFile, "%s", "Resultado de valores reversos: ");
                for(int i = 0; i < size; i++){
                    value = array[i]+'0';
                    fprintf(myFile, "%c", value);
                }
                fprintf(myFile, "%s", "\n");
                fclose(myFile);

                printf("Resultado salvo no arquivo!");
            }
            printf("\n");
        }else if(choice == 'E' || choice == 'e'){
            myFile = fopen("resultados.txt", "a");
            int num = 0;
            printf("Digite o valor que você busca no vetor: ");
            scanf("%d", &num);
            int result = elemNum(array, size, num);
            printf("\nA quantidade de vezes que o número %d aparece no vetor é: %d\n\n", num, result);

            if(write_file() == 1){
                fprintf(myFile, "%s", "Resultado da quantidade de vezes que o número ");
                fprintf(myFile, "%d", num);
                fprintf(myFile, "%s", " aparece: ");
                fprintf(myFile, "%d", result);
                fprintf(myFile, "%s", "\n");
                fclose(myFile);

                printf("Resultado salvo no arquivo!");
            }
            printf("\n");
        }else if(choice == 'U' || choice == 'u'){
            myFile = fopen("resultados.txt", "a");
            int value_size = 0;
            int *array2 = unique(array, size);
            value_size = array2[-1];

            printf("Valores únicos do vetor: ");

            for (int i = 0; i < value_size; i++){
                printf("%d ", array2[i]);
            }

            if(write_file() == 1){
                fprintf(myFile, "%s", "Resultado dos números únicos do vetor: ");
                for (int i = 0; i < value_size; i++){
                    fprintf(myFile, "%d", array2[i]);
                }
                fprintf(myFile, "%s", "\n");
                fclose(myFile);

                printf("Resultado salvo no arquivo!");
            }
            printf("\n");
        }else if(choice == 'D' || choice == 'd'){
            
        }else if(choice == 'S' || choice == 's'){
            free(array);
            exit(0);
        }else{
            system("clear");
            printf("Opção inválida...\n");
        }
    }

    return 0;
}