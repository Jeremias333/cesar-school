#include "stdio.h"
#include "stdlib.h"
#include "string.h"

  int cont = 0;

  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    if (largest != i) {
      if(cont == 0){
        printf("\nEstado inicial:");
    // printf("%d", size);
        for(int i = 0; i < n; i++){
            // printf("\nvalor de i: %d\n", i);

            if(arr[i] != -1){
                if(arr[i] > -1 && arr[i+1] == -1){
                    printf(" %d", arr[i]);
                }else{
                    printf(" %d ", arr[i]);
                    printf("|");
                }
            }  
        }
      }else{
        printf("\nEstado Atual da Heap:");
        for(int i = 0; i < n; i++){
          // printf("\nvalor de i: %d\n", i);

          if(arr[i] != -1){
              if(arr[i] > -1 && arr[i+1] == -1){
                  printf(" %d", arr[i]);
              }else{
                  printf(" %d ", arr[i]);
                  printf("|");
              }
          } 
        }
      }
      cont++;
      printf("\nMaior elemento neste passo: %d", arr[largest]);
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
      
      
    }

    
  }
  

  void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  

      heapify(arr, i, 0);
    }
  }

// void fila(int *lista, int raiz, int fim) {
// 	int ok, maiorFilho, num;

// 	ok = 0;
// 	while ((raiz*2 <= fim) && (!ok)) {

// 		if (raiz*2 == fim) {
// 			maiorFilho = raiz * 2;
// 		}
// 		else if (lista[raiz * 2] > lista[raiz * 2 + 1]) {
// 			maiorFilho = raiz * 2;
// 		}
// 		else {
// 			maiorFilho = raiz * 2 + 1;
// 		}

//     if (lista[raiz] < lista[maiorFilho]) {
//       num = lista[raiz];
//       lista[raiz] = lista[maiorFilho];
//       lista[maiorFilho] = num;
//       raiz = maiorFilho;

    
//       }
      
//     else {
//         ok = 1;
//     }
    
//   }
// }

// int *heapSort(int *lista, int size) {
// 	int i, num;

// 	for (i = (size / 2); i >= 0; i--) {
//         // printf("\nvalor de i: %d\n", i);
        
// 		fila(lista, i, size - 1);
//         // for(int i = 0; i < size; i++){
//         //   if(lista[i] != -1){
//         //     printf("\nEstado Atual da Heap:");
//         //     if(lista[i] > -1 && lista[i+1] == -1){
//         //         printf(" %d", lista[i]);
//         //     }else{
//         //         printf(" %d ", lista[i]);
//         //         printf("|");
//         //     }
//         //   }
//         // }
// 	}

// 	for (i = size-1; i >= 1; i--) {
// 		num = lista[0];
// 		lista[0] = lista[i];
// 		lista[i] = num;
// 		fila(lista, 0, i-1);
// 	}
//   return lista;
// }

int main(void){
    int size = 100;
    char values[size];

    fgets(values, size, stdin);

    size = strlen(values);
    int array[size];

    for(int i = 0; i < size; i++){
        array[i] = -1;
    }
    
    int cont = 0;
    char tmp[size];
    int i;
    int j;
    for(i=0;values[i];i++){
        j=0;
        while(values[i]>='0' && values[i]<='9'){
            tmp[j]=values[i];
            i++;
            j++;
        }
        tmp[j]=0;
        long a = strtol(tmp, NULL, 10);
        array[cont] = a;

        cont++;
    }

    heapSort(array, size);

    printf("\nResultado final:");
    // printf("%d", size);
    for(int i = 0; i < size; i++){
        // printf("\nvalor de i: %d\n", i);

        if(array[i] != -1){
            if(array[i] > -1 && array[i+1] == -1){
                printf(" %d", array[i]);
            }else{
                printf(" %d ", array[i]);
                printf("|");
            }
        }
        
    }
}