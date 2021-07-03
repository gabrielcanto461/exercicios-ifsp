//imprimir codigo correspondente da tabela ASCII para um caracter digitado pelo usuario

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	char caractere;

	printf("Digite um caracter qualquer: ");

	scanf("%c", &caractere);
	printf("%d", caractere);

	return 0;

}
