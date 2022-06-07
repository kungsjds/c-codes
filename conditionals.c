#include <stdio.h>
#include <stdlib.h>

void calculatorSwitchCase() {

	float a, b, calculo;
	int opcao;

	printf("Digite um numero: ");
	scanf_s("%f", &a);

	printf("Digite outro numero: ");
	scanf_s("%f", &b);

	printf("-----Opcoes de Calculo-----\n");
	printf("|    1 - para somar       |\n");
	printf("|    2 - para subtrair    |\n");
	printf("---------------------------\n");

	printf("Digite uma das opcoes: ");
	scanf_s("%d", &opcao);

	switch (opcao) {
	case 1:
		calculo = a + b;
		printf("A soma dos valores e: %.2f", calculo);
		break;
	case 2:
		calculo = a - b;
		printf("A subtracao dos valores e: %.2f", calculo);
		break;
	default:
		printf("Opcao invalida!");
		break;
	};
};
