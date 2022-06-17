#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a struct called Player
typedef struct {
	char name[50];
	char vocation[80];
	int age;
	int level;
	float height;
	
} Player;

void handleStructs() {

	// Declare player1 of type Player
	Player player1;

	printf("Create your char: \n\n");

	// Input of values
	printf("Enter a name: ");
	scanf_s("%s", &player1.name, 50);
	fflush(stdin);

	printf("Enter a vocation: ");
	scanf_s("%s", &player1.vocation, 80);
	fflush(stdin);

	printf("Enter an age: ");
	scanf_s("%d", &player1.age);

	printf("Enter a height: ");
	scanf_s("%f", &player1.height);

	player1.level = 1;

	// Print output player1 values
	printf("\n");

	printf("Name: %s \n", player1.name);
	printf("Vocation: %s \n", player1.vocation);
	printf("Age: %d \n", player1.age);
	printf("Height: %.2f \n", player1.height);
	printf("Level: %d \n", player1.level);

};