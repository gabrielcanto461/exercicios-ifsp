//Ler um n�mero inteiro e verificar se � impar ou par

#include <stdio.h>
int main() {

	setbuf(stdout, NULL);
	int numero;

	printf("Digite um n�mero inteiro: ");
	scanf("%d", &numero);

	if (numero % 2 == 0) {
		printf("O n�mero %d � par!", numero);

	} else {
		printf("O n�mero %d � �mpar!", numero);

	}
	return 0;

}
