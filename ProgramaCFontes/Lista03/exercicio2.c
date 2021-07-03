/*Faça um programa que recebe um número inteiro e imprime “É uma letra”, se o valor
 digitado corresponde a uma letra (maiúscula ou minúscula) da Tabela ASCII, caso
 contrário, imprime “Não é uma letra”.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int numero;

	printf("Digite um número inteiro: ");
	scanf("%d", &numero);

	//As letras na tabela ascii estao entre 65 e 90 ou 97 e 122

	if (numero >= 65 && numero <= 90) {

		printf("É uma letra.\n");
		printf("É a letra '%c'.", numero);

	} else if (numero >= 97 && numero <= 122) {

		printf("É uma letra.\n");
		printf("É a letra '%c'.", numero);

	} else {

		printf("Não é uma letra.");

	}
	return 0;
}
