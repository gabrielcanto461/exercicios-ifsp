/*Fa�a um programa que recebe um n�mero inteiro e imprime �� uma letra�, se o valor
 digitado corresponde a uma letra (mai�scula ou min�scula) da Tabela ASCII, caso
 contr�rio, imprime �N�o � uma letra�.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int numero;

	printf("Digite um n�mero inteiro: ");
	scanf("%d", &numero);

	//As letras na tabela ascii estao entre 65 e 90 ou 97 e 122

	if (numero >= 65 && numero <= 90) {

		printf("� uma letra.\n");
		printf("� a letra '%c'.", numero);

	} else if (numero >= 97 && numero <= 122) {

		printf("� uma letra.\n");
		printf("� a letra '%c'.", numero);

	} else {

		printf("N�o � uma letra.");

	}
	return 0;
}
