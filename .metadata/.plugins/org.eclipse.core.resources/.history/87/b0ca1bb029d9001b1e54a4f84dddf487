/*6. Faça um programa que receba dois números (N1 e N2). Depois, calcule e mostre:
 •A soma dos números pares no intervalo entre N1 e N2, incluindo os números
 digitados;
 •A multiplicação dos números ímpares no intervalo entre N1 e N2, incluindo os
 números digitados;*/
#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
	int n1, n2, somaPares = 0; //0 elemento neutro da soma e 1 elemento neutro da multiplicação
	long int multiplicaImpar = 1;
	printf("Digite o valor inicial do intervalo (N1): ");
	scanf("%d", &n1);
	printf("Digite o valor final do intervalo (N2): ");
	scanf("%d", &n2);

	//laço que varia n1, poderia usar uma variavel auxiliar pra conservar n1
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
	printf("Soma dos números pares no intervalo entre N1 e N2: %d\n",
			somaPares);
	printf("Multiplicação dos números ímpares no intervalo entre N1 e N2: %ld",
			multiplicaImpar);

	return 0;
}
