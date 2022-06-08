#include <stdio.h>
#include <stdlib.h>
#include <time.h> //library para utilizar funções random


void randomNumberGenerator() {

	//Usa o tempo atual do computador como semente
	srand(time(NULL));


	//Todo resto de divisão por um número inteiro, irá ir de 0 até um número antes do número que está dividindo.
	//Ex. ? % 20 = Algum número dividido com 20, os restos possíveis da divisão será de 0 a 19. 

	//Gerando um número aleatório de 5 a 14
	int random1 = (rand() % 10) + 5; //Nesse caso com o +5 o valor máximo a retornar será 14 (9+5) e o minimo será 5(0+5). Então o intervalo passa a ser de 5 até 14.

	const int MIN_VAL = 10;
	const int MAX_VAL = 100;

	// 100 - 10 + 1 = 91
	// 91 + 10 = 101
	// (? % 101) + 10 = (O intervalo será de 10 a 100)
	int random2 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;

	printf("Random num: %d\n\n", random1);

	printf("Another random num: %d", random2);

}

void threeRandomDice() {

	srand(time(NULL));

	int dice1, dice2, dice3, soma;

	printf("Rolling the dice...\n\n");

	// Random dice from 1 to 6
	dice1 = (rand() % 6) + 1;
	printf("First dice: %d\n", dice1);

	dice2 = (rand() % 6) + 1;
	printf("Second dice: %d\n", dice2);

	dice3 = (rand() % 6) + 1;
	printf("Third dice: %d\n\n", dice3);

	soma = dice1 + dice2 + dice3;

	printf("The dice sum %d, %d and %d is: %d\n\n", dice1, dice2, dice3, soma);

}