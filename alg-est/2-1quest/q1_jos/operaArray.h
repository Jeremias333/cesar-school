#ifndef OPERAARRAY
#define OPERAARRAY

int * newReverse(int * list_array, int size){
    // printf("%d tamanho do array", size);
    
    int interator = 0;
    int aux;
    int right = size-1;
    int left = 0;

    while(1){
        //sai do loop quando concluir todos números e a quantidade for impar de elementos
        if(left == right){
            break;
        }

        aux = list_array[left];
        list_array[left] = list_array[right];
        list_array[right] = aux;

        left++;
        right--;

        interator++;

        //sai do loop quando concluir todos números e a quantidade for par de elementos
        if(interator == size/2){
            break;
        }
    }

    // for(int i = 0; i < size; i++){
    //     printf("%d ", list_array[i]);
    // }

    return list_array;
}

int elemNum(int * list_array, int size, int x){
    int cont = 0;

    for(int i = 0; i < size; i++){
        if (x == list_array[i]) {
            cont++;
        }
    }

    return cont;
}

int * unique(int * list_array, int size){
    int cont = 0;
    int list_array_copy[size];

    //copiando valores do array
    for (int i = 0; i < size; i++){
        list_array_copy[i] = list_array[i];
    }

    //utilizando um algoritmo reversivo para poder transformar os números repetidos em -1
    for (int i = 0; i <= size; i++){
        for (int j = i+1; j < size; j++){
            if(list_array[i] == list_array[j]){
                list_array_copy[i] = -1;
                list_array_copy[j] = -1;
            }
        }
    }

    //contando números repetidos
    for (int i = 0; i < size; i++){
        if (list_array_copy[i] != -1){
            cont++;
        }
    }

    //criando array que será utilizado para unir os números únicos
    int * list_array_final = malloc(cont * sizeof(int));

    //criando variavel de controle para popular numeros unicos no array
    int cont_fixed = cont;

    //unindo em um array apenas os números que não se repetem.
    for(int i = 0; i < size; i++){
        if(list_array_copy[i] != -1 && cont >= 0){
            list_array_final[cont_fixed-cont] = list_array_copy[i];
            cont--;
        }
    }

    //enviando o tamanho do array
    list_array_final[-1] = cont_fixed;

    return list_array_final;
    
}

int * deleteN(int * list_array, int pos){
    list_array[pos] = -1;

    printf("Valor do pos %d", list_array[pos]);

    return list_array;
}

#endif