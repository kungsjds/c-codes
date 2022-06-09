#include <stdio.h>
#include <stdlib.h>

void repeatWhile() {

	int i = 50;

	// Descending order of 6 in 6.
	while (i >= 0) {
		printf("%d\n", i);

		i -= 6;
	};

};

void evenNumWhile() {

	int i = 10;
	int max;

	printf("Enter an integer value for the loop: ");
	scanf_s("%d", &max);

	while ((i <= max) || (i >= max)) {

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

};

void sumWhileInterval() {

	int a = 0;
	int b = 0;
	int sum;
	int loop = 1;

	/*do {

		printf("Enter a value between 5 and 10. \n\n");

		printf("Enter a value: ");
		scanf_s("%d", &a);

		printf("Enter an another value: ");
		scanf_s("%d", &b);
		printf("\n");

		if ((a > 5 && a < 10) && (b > 5 && b < 10)) {

			sum = a + b;

			printf("The sum is: %d", sum);

			loop = 0;
		};

	} while (loop == 1);*/

	// >!< = NOT - While a or b NOT do.
	while (!(a > 5 && a < 10) || !(b > 5 && b < 10)) {

		printf("Enter a value between 5 and 10. \n\n");

		printf("Enter a value: ");
		scanf_s("%d", &a);

		printf("Enter an another value: ");
		scanf_s("%d", &b);
		printf("\n");

	};

	sum = a + b;

	printf("The sum is: %d", sum);

};





void forSum() {

	int sum = 0;

	for (int i = 0; i <= 10; i++) {

		printf("i = %d (Sum: %d) \n", i, sum);

		sum += i;

	};

	printf("Total: %d", sum);

};


void multTable() {

	int mult = 0;
	int val;

	printf("Enter a value for the multiplication table: ");
	scanf_s("%d", &val);


	for (int i = 0; i <= 10; i++) {

		mult = i * val;

		printf("%d x %d = %d \n", val, i, mult);

	};

};


void undefinedFor() {

	int start, end, inc;

	printf("Enter a start value: ");
	scanf_s("%d", &start);

	printf("Enter an end value: ");
	scanf_s("%d", &end);

	printf("Enter an increment value: ");
	scanf_s("%d", &inc);

	for (int i = start; i <= end; i += inc) {

		printf("%d \n", i);

	}

}