#include <stdio.h>
#include <stdlib.h>

#define LEVEL 2 //For 3D matrix
#define ROW 2
#define COLUMN 3

void matrix2D() {

	int matrix[ROW][COLUMN];
	int i, j;

	// Reading the 2D matrix
	for (i = 0; i < ROW; i++) {

		for (j = 0; j < COLUMN; j++) {

			printf("Enter a row %d and column %d value: ", i, j);
			scanf_s("%d", &matrix[i][j]);

		};

	};
	printf("\n");

	// Writing the 2D matrix
	for (i = 0; i < ROW; i++) {

		for (j = 0; j < COLUMN; j++) {

			printf("%d", matrix[i][j]);

		};

		printf("\n");

	};

};


void matrix3D() {

	int matrix[LEVEL][ROW][COLUMN];
	int i, j, k;

	// Reading the 3D matrix
	for (i = 0; i < LEVEL; i++) {

		for (j = 0; j < ROW; j++) {

			for (k = 0; k < COLUMN; k++) {

				printf("Entar a level %d, row %d and column: %d value: ", i, j, k);
				scanf_s("%d", &matrix[i][j][k]);

			};

		};

	};
	printf("\n");

	// Writing the 3D matrix
	for (i = 0; i < LEVEL; i++) {

		for (j = 0; j < ROW; j++) {

			for (k = 0; k < COLUMN; k++) {

				printf("%d", matrix[i][j][k]);

			};
			printf("\n");
		};
		printf("\n");
	};

};