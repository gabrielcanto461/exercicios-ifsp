//Ler um numero e real e exibir o quadrado dele

#include <stdio.h>

int main() {

	//declarar variavel
	float num;

	//entrada
	printf("Digite um n�mero: ");
	scanf("%f", &num);

	//saida
	printf("O quadrado de %.2f � %.2f!", num, num*num);

	return 0;

}
