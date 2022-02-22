#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

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