/*6. Fa�a um programa que receba dois n�meros (N1 e N2). Depois, calcule e mostre:
 �A soma dos n�meros pares no intervalo entre N1 e N2, incluindo os n�meros
 digitados;
 �A multiplica��o dos n�meros �mpares no intervalo entre N1 e N2, incluindo os
 n�meros digitados;*/
#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
	int n1, n2, somaPares = 0; //0 elemento neutro da soma e 1 elemento neutro da multiplica��o
	long int multiplicaImpar = 1;
	printf("Digite o valor inicial do intervalo (N1): ");
	scanf("%d", &n1);
	printf("Digite o valor final do intervalo (N2): ");
	scanf("%d", &n2);

	//la�o que varia n1, poderia usar uma variavel auxiliar pra conservar n1
	//incluindo os extremos do intervalo
	while (n1 <= n2) {
		if (n1 % 2 == 0) {
			somaPares = somaPares + n1;
		} else {
			multiplicaImpar = multiplicaImpar * n1;
		}
		n1++;
	}
	printf("----------------------------------------------------------------------\n");
	printf("Soma dos n�meros pares no intervalo entre N1 e N2: %d\n",
			somaPares);
	printf("Multiplica��o dos n�meros �mpares no intervalo entre N1 e N2: %ld",
			multiplicaImpar);

	return 0;
}
