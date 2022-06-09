#include <stdio.h>
#include <stdlib.h>

// Defining global constant variables. Don't need to specify the type.
#define INTEGER 5
#define FLOAT 5.5
#define CHAR 'A'

void showConstants() {

	// Defining local contant variables. Need to specify the type.
	const int LOCAL = 10;

	printf("%d \n", INTEGER);
	printf("%.2f \n", FLOAT);
	printf("%c \n", CHAR);
	printf("%d \n", LOCAL);

	// Constants take up less memory space and are more safe.

}
