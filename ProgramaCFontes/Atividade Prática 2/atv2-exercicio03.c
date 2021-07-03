//Atividade Prática Individual 2
/*3. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “número
inválido”. Se o número for positivo, calcular o logaritmo deste número. */

#include <stdio.h>
#include <math.h>

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	float logaritmo, logaritmoBase10;

	printf("Digite um número inteiro: ");
	scanf("%d", &numero);

	if (numero < 0) {
		printf("Número inválido!");

	} else {
		logaritmo = log(numero);
		logaritmoBase10 = log10(numero);
		printf("Logaritmo natural de %d = %.2f.\n", numero, logaritmo);
		printf("Logaritmo na base 10 de %d = %.2f.", numero, logaritmoBase10);

	}
	return 0;

}
