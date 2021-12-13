#include "stdio.h"
#include "stdlib.h"

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

int main(void){

  int size =  0;
  scanf("%d", &size);

  int array[size];

  for(int i = 0; i < size; i++){
    scanf("%d", &array[i]);
  }

  bubbleSort(array, size);

  for(int i = 0; i < size; i++){
    printf("\n%d", array[i]);
  }

  return 0;
}