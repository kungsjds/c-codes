#include <stdio.h>
#include <stdlib.h>

void repeatWhile() {

	int i = 50;

	// Descending order of 6 in 6.
	while (i >= 0) {
		printf("%d\n", i);

		i -= 6;
	};

}

void evenNumWhile() {

	int i = 10;
	int max;

	printf("Enter an integer value for the loop: ");
	scanf_s("%d", &max);

	while ( (i <= max) || (i >= max) ) {

		if (i % 2 == 0) {
			printf("Even num: %d\n", i);
		};

		if (i == max) {
			break;
		}
		else 
		if (i < max) {
			i += 1;
		}
		else {
			i -= 1;
		};

	};

}