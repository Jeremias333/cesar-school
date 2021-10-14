#include <stdio.h>
#include <stdlib.h>



int matrix_triangle[9][3];

void verify(int i_init, int i_final, int j_init, int j_final);

int main(void)
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 3; j++)
			scanf("%d", &matrix_triangle[i][j]);
	}

	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++)
	//		printf("%d ", matrix_triangle[i][j]);
	//	printf("\n");
	//}

	// printf("É superior? %d", superTrue);

	// for (int i = 0; i < 10; i++) {
	// 	for (int j = 0; j < 3; j++){
			
	// 	}
	// 	if (i == 3){
	// 		if (inferTrue == 1)
	// 			printf("Por baixo");
	// 		else if(superTrue == 1)
	// 			printf("Por cima");
	// 		else
	// 			printf("Nao pode atravessar");
	// 	}
	// }
	int i_inicializador = 0;
	// int j_inicializador = 0;
	// int j_finalize = 0;
	int cont = 0;
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 3; j++){
			if (cont == 0) {
				i_inicializador = i;
			}
		}
		if (cont == 3){
			cont = 0;
			verify(i_inicializador, i, 1, 3);
		}else{
			cont += 1;
		}
	}

}

void verify(int i_init, int i_final, int j_init, int j_final) 
	{

	char result[] = " Nao pode atravessar";
	//Buscando triangulo inferior
	int inferTrue = 1;

	for (int i = i_init; (i < i_final) && (inferTrue == 1); i++) {
		for (int j = (i + j_init); (j < j_final) && (inferTrue == 1); j++) {
			if (matrix_triangle[i][j] != 0)
				inferTrue = 0;
		}
		if (inferTrue == 1)
			result[21] = " Por baixo";
	}

	//Buscando triangulo superior
	int superTrue = 1;

	for (int i = i_init; i < i_final; i++) {
		for (int j = j_init; j < j_final; j++) {
			printf("valor do i: %d \nvalor do j: %d\n", i, j);
			if (i < j && matrix_triangle[i][j] != 0)
				superTrue = 0;
		}
		printf("\n");
		if (superTrue == 1)
			result[21] = " Por cima";
	}

	printf("%s\n", result);
}