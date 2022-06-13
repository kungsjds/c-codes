#include <stdio.h>
#include <stdlib.h>

#define TAM 5


void showStrings() {

	char word1[] = "fun"; // Define a string size = 3
	char word2[5] = "game"; // Define a string size = 5 ( the last size is for '\0' )
	char word3[] = { 'a', 'b', 'c', 'd', '\0' }; // Define a string size = 5
	char word4[TAM] = { 'l', 'o', 'o', 'p', '\0' }; // Define an array of char ( string ) with constant size

	// Reading a string with space
	char fruit[255];
	fflush(stdin);
	printf("Enter a fruit name: ");
	fgets(fruit, sizeof(fruit), stdin); // Reading with space
	//(stdin = standard input - entrada principal do teclado)

	// Print string with space
	printf("The fruit is: ");
	puts(fruit); // Print with space

	// Print a string without space
	printf("Word1: %s \n\n", word1);

	// Reading a string without space
	printf("Enter a word until 4 char: ");	
	fflush(stdin);
	scanf_s("%4s", word2, 5); // Reading without space	
	printf("The word is: %s \n", word2);		

}