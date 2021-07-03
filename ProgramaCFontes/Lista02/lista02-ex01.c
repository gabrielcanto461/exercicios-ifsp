//Ler um número inteiro e verificar se é impar ou par

#include <stdio.h>
int main() {

	setbuf(stdout, NULL);
	int numero;

	printf("Digite um número inteiro: ");
	scanf("%d", &numero);

	if (numero % 2 == 0) {
		printf("O número %d é par!", numero);

	} else {
		printf("O número %d é ímpar!", numero);

	}
	return 0;

}
