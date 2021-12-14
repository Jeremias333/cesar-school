#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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


void fazerTrocar(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void imprimirnum(int *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
        printf("[%d]", arr[i]);
    printf("\n");
}

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

int main(void)
{
        int tamanho;
        int numeros;

        scanf("%d", &tamanho);

        int array[tamanho];

        for (int i = 0; i < tamanho ; i++){
                scanf( "%d", &array[i]);
        }

        int *result;
        result = heapSort(array, tamanho);
        imprimirnum(result, tamanho);

        return 0;
}