#include <stdio.h>

int matrix_triangle[3][3];

int main(void)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			scanf("%d", &matrix_triangle[i][j]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", matrix_triangle[i][j]);
		printf("\n");
	}

	//Buscando triangulo inferior
	int inferTrue = 1;

	for (int i = 0; (i < 3) && (inferTrue == 1); i++) {
		for (int j = (i + 1); (j < 3) && (inferTrue == 1); j++) {
			if (matrix_triangle[i][j] != 1)
				inferTrue = 0;
		}
	}

	printf("É inferior? %d", inferTrue);
}