#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void fila(int *lista, int raiz, int fim) {
	int ok, maiorFilho, num;

	ok = 0;
	while ((raiz*2 <= fim) && (!ok)) {
		if (raiz*2 == fim) {
			maiorFilho = raiz * 2;
		}
		else if (lista[raiz * 2] > lista[raiz * 2 + 1]) {
			maiorFilho = raiz * 2;
		}
		else {
			maiorFilho = raiz * 2 + 1;
		}

    if (lista[raiz] < lista[maiorFilho]) {
      num = lista[raiz];
      lista[raiz] = lista[maiorFilho];
      lista[maiorFilho] = num;
      raiz = maiorFilho;
      }
    else {
        ok = 1;
    }
  }
}

void ponta(int lista[], int x, int y, int r) {

  int n1 = y - x + 1;
  int n2 = r - y;

  int sublista1[n1], sublista2[n2];

  for (int i = 0; i < n1; i++)
    sublista1[i] = lista[x + i];
  for (int j = 0; j < n2; j++)
    sublista2[j] = lista[y + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = x;

  while (i < n1 && j < n2) {
    if (sublista1[i] <= sublista2[j]) {
      lista[k] = sublista1[i];
      i++;
    } else {
      lista[k] = sublista2[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    lista[k] = sublista1[i];
    i++;
    k++;
  }

  while (j < n2) {
    lista[k] = sublista2[j];
    j++;
    k++;
  }
}

int *bubbleSort(int *numList, int size)
{
  int tmp;

  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(numList[j] > numList[j+1]){
        tmp = numList[j];
        numList[j] = numList[j+1];
        numList[j+1] = tmp;
      }
    }
  }
  return numList;
}

int *selectionSort(int *numList, int size)
{
  int tmp;

  for (int i = size-1; i > 0; i--){
    for(int j = size-1; j > 0; j--){
      if(numList[j] < numList[j-1]){
        tmp = numList[j-1];
        numList[j-1] = numList[j];
        numList[j] = tmp;
      }
    }
  }
  return numList;
}

int *insertionSort(int *numList, int size)
{
  int n,j;
  for(int i = 1; i < size; i++){
      n = numList[i];
      j = i - 1;
      while((n < numList[j]) && (j >= 0)){
         numList[j + 1] = numList[j];
         j = j - 1;
      }
      numList[j + 1] = n;
   }
   return numList;
}

int *heapSort(int *lista, int size) {
	int i, num;

	for (i = (size / 2); i >= 0; i--) {
		fila(lista, i, size - 1);
	}

	for (i = size-1; i >= 1; i--) {
		num = lista[0];
		lista[0] = lista[i];
		lista[i] = num;
		fila(lista, 0, i-1);
	}
  return lista;
}

void mergeSorted(int *lista, int l, int r) {
  if (l < r) {

    int dividirL = l + (r - l) / 2;

    mergeSorted(lista, l, dividirL);
    mergeSorted(lista, dividirL + 1, r);

    ponta(lista, l, dividirL, r);
  }
}

int *mergeSort(int *lista, int size)
{
  mergeSorted(lista, 0, size-1);

  return lista;
}

void fazerTrocar(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int particao(int lista[], int baixo, int alto){

  int pivot = lista[alto];

  int i = (baixo - 1);

  for (int j = baixo; j < alto; j++) {
    if (lista[j] <= pivot) {
      i++;
      fazerTrocar(&lista[i], &lista[j]);
    }
  }

  fazerTrocar(&lista[i + 1], &lista[alto]);
  
  return (i + 1);
}

void quickSorted(int lista[], int baixo, int alto) {
  if (baixo < alto) {

    int pi = particao(lista, baixo, alto);

    quickSorted(lista, baixo, pi - 1);
    
    quickSorted(lista, pi + 1, alto);
  }
}

int *quickSort(int *lista, int size)
{
  quickSorted(lista, 0, size-1);

  return lista;
}

void imprimirnum(int *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
        printf(" <%d> ", arr[i]);
    printf("\n");
}

int main(void)
{
  clock_t start, end;
  double cpu_time_used;
  int tamanho,op;
  FILE *numeros;

  do{
    printf("1 - 1000\n2 - 5000\n3 - 10000\n4 - 20000\n5 - 50000\n6 - 75000\n7 - 100000\n");
    scanf(" %d",&op);
    switch (op){
      case 1:
        numeros = fopen("1000.txt", "r");
        tamanho = 1000;      
        break;
      case 2:
        numeros = fopen("5000.txt", "r");
        tamanho = 5000;      
        break;
      case 3:
        numeros = fopen("10000.txt", "r");
        tamanho = 10000;      
        break;
      case 4:
        numeros = fopen("20000.txt", "r");
        tamanho = 20000;      
        break;
      case 5:
        numeros = fopen("50000.txt", "r");
        tamanho = 50000;      
        break;
      case 6:
        numeros = fopen("75000.txt", "r");
        tamanho = 75000;      
        break;
      case 7:
        numeros = fopen("100000.txt", "r");
        tamanho = 100000;      
        break;
    }
  }while (op==0);

  int array[tamanho];
  for (int i = 0; i < tamanho ; i++)
    fscanf(numeros, "%d ", &array[i]);

  imprimirnum(array, tamanho);

  printf("1 - Bubble Sort\n2 - Selection Sort\n3 - Insertion Sort\n4 - Heap Sort\n5 - Merge Sort\n6 - Quick Sort\n");
  scanf(" %d",&op);

  int *result;
  switch (op){
    case 1:
      start = clock();
      result = bubbleSort(array, tamanho);
      end = clock();
      break;
    case 2:
      start = clock();
      result = selectionSort(array, tamanho);
      end = clock();
      break;
    case 3:
      start = clock();
      result = insertionSort(array, tamanho);
      end = clock();
      break;
    case 4:
      start = clock();
      result = heapSort(array, tamanho);
      end = clock();
      break;
    case 5:
      start = clock();
      result = mergeSort(array, tamanho);
      end = clock();
      break;
    case 6:
      start = clock();
      result = quickSort(array, tamanho);
      end = clock();
      break;
    default:
      printf("error 101");
      break;
  }
  imprimirnum(result, tamanho);

  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("%lf segundos", cpu_time_used);
  fclose(numeros);
}
