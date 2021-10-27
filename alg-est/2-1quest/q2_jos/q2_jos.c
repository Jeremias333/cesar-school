#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*

EXECUTAR O ARQUIVO COM O PARAMETRO -lm

gcc q2_jos.c -o q2_josc -lm

*/

typedef struct
{
    int num_conta;
    char nome[15];
    char sobrenome[15];
    float saldo;
} dadosClientes;

int convert(long long n);

int main(void){
    char line[100];

    FILE *file;
    file = fopen("CLIENTES.txt", "rt");

    int cont = 0;
    //olhando quantas linhas existem no arquivo para saber quantos clientes serão cadastrados.
    while (!feof(file)) {
        fgets(line, 100, file);
        cont++;
    }

    cont--;

    // printf("valor final do cont %d", cont);

    //criando array de structs com a quantidade de clientes no arquivo
    dadosClientes clientes[cont];

    char *result;
    int i = 1;
    char *pont;

    //apontando para o inicio do arquivo novamente.
    rewind(file);

    while (!feof(file)) {
        result = fgets(line, 100, file);

        if(result){
            char temp_char[2];
            
            //criando e populando numeros de conta;
            for (int index = 0; index < 100; index++){
                temp_char[0] = line[index];
                // temp_char[1] = line[index+1];
                // printf("\n%c", line[index]);
                if(temp_char[0] == ' '){
                    if(i - 1 >= 9){
                        temp_char[0] = line[index-2];
                        temp_char[1] = line[index-1];
                        clientes[i-1].num_conta = convert(strtol(temp_char, NULL, 10));
                        // printf("\nnumero da conta: %d\n", clientes[i-1].num_conta);
                        break;
                    }
                    clientes[i-1].num_conta = (line[0]-'0');
                    // printf("\nnumero da conta: %d", clientes[i-1].num_conta);
                    break;
                }
            }

            //extraindo nome do arquivo
            for (int index = 0; index < 100; index++){
                

            }
            // printf("Linha %d: %s", i, line);
            i++;
        }
            
    }

    

    // int i=1;
    // while (!feof(file)) {
    //     result = fgets(line, 100, file);
    //     // char carac = fgetc(file);

    //     if(result)
    //         printf("Linha %d: %s", i, line);
    //     i++;
    // }

    

    // printf("\n%c", line[0]);

    // if(line[1]==' '){
    //     printf("entrou");
    // }



    return 0;
}

int convert(long long n) {
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
}