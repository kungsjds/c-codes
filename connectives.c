#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Connector OU - | - Uma das verificações devem ser verdadeiras. Retornando o resto da divisão(%) por 2, se for 0 não tem resto, então é par, se não é impar.
void connectiveOr() {

	int a, b;

	printf("Digite um numero: ");
	scanf_s("%d", &a);

	printf("Digite outro numero: ");
	scanf_s("%d", &b);

	if ((a % 2 == 0) || (b % 2 == 0)) {
		printf("Um dos numeros: %d e %d e par", a, b);
	}
	else {
		printf("Nenhum dos numeros: %d e %d e par", a, b);
	};
	
}


//Utilizando dois conectivos no mesmo if (&& - ||). OBS: "\n" faz uma quebra de linha no final. Como se apertasse Enter.
void twoConnectivesOnIf() {

	int a, b, soma;

	printf("Digite um numero: ");
	scanf_s("%d", &a);

	printf("Digite outro numero: ");
	scanf_s("%d", &b);

	soma = a + b;

	if ( (soma > 0 && soma < 10) || (soma % 2 == 0) ) {
		printf("A soma esta entre 0 e 10 ou e um numero par: %d\n", soma);
	}
	else {
		printf("A soma nao esta entre 0 e 10 e e um numero impar: %d\n", soma);
	};

}

//Connector E - && - Todas as verificações devem ser verdadeiras
void connectiveAnd() {

	int a, b;

	printf("Digite um numero: ");
	scanf_s("%d", &a);

	printf("Digite outro numero: ");
	scanf_s("%d", &b);

	if (a > 10 && b > 10) {
		printf("Os dois numeros: %d e %d sao maiores que 10\n\n", a, b);
	}
	else {
		printf("Um dos numeros: %d e %d nao e maior que 10\n\n", a, b);
	};

}


