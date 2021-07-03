/*Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil)*/

#include <stdio.h>

int main() {

	setbuf(stdout,NULL);

	int num = 0;

	while (num <= 100000) {
		printf("Valor: %d\n", num);
		num = num + 1000;

	}

	return 0;
}
