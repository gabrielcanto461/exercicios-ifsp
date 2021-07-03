//Atividade Pr�tica Individual 2
/*3. Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem �n�mero
inv�lido�. Se o n�mero for positivo, calcular o logaritmo deste n�mero. */

#include <stdio.h>
#include <math.h>

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	float logaritmo, logaritmoBase10;

	printf("Digite um n�mero inteiro: ");
	scanf("%d", &numero);

	if (numero < 0) {
		printf("N�mero inv�lido!");

	} else {
		logaritmo = log(numero);
		logaritmoBase10 = log10(numero);
		printf("Logaritmo natural de %d = %.2f.\n", numero, logaritmo);
		printf("Logaritmo na base 10 de %d = %.2f.", numero, logaritmoBase10);

	}
	return 0;

}
