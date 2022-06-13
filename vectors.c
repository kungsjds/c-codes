#include <stdio.h>
#include <stdlib.h>

// Define a constant size
#define TAM 3

void arrays() {

	int vector1[] = { 1,2 }; // array of int
	int vector2[5] = { 1, 2, 3, 4, 5 }; // array of int
	float vector3[TAM] = { 1.5, 2.6, 3.9 }; // array of float

	printf("Vector 1: \n");
	for (int i = 0; i < 2; i++) {

		printf("%d \n", vector1[i]);

	}

	printf("\n");
	printf("Vector 2: \n");
	for (int i = 0; i < 5; i++) {

		printf("Enter a value for vector2[%d]: ", i);
		scanf_s("%d \n", &vector2[i]);

	};

	printf("\n");
	printf("Vector 3: \n");
	for (int i = 0; i < TAM; i++) {

		printf("%.2f \n", vector3[i]);

	}

}