//Fa�a um programa que solicita um n�mero decimal e imprime o correspondente em hexa,
//octal e caracter.

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int numero;

	printf("Digite um n�mero decimal: ");
	scanf("%d", &numero);

	printf("%d em octal equivale a %o.\n", numero, numero);
	printf("%d em hexadecimal equivale a %X.\n", numero, numero);
	printf("%d equivale ao caracter '%c'.\n", numero, numero);

	return 0;

}
