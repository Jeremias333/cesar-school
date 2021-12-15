#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArrays(int *arr, size_t size){
  for (size_t i = 0; i < size; i++)
    printf("[%d]", arr[i]);
  printf("\n");
}


int main(void){
  int size;
  int numeros;

  scanf("%d", &size);
  int array[size];

  for (int i = 0; i < size ; i++){
    scanf( "%d", &array[i]);
  }

  bubbleSort(array, size);
  printArrays(array, size);

  return 0;
}