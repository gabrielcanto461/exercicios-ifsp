//Ler um numero e real e exibir o quadrado dele

#include <stdio.h>

int main() {

	//declarar variavel
	float num;

	//entrada
	printf("Digite um número: ");
	scanf("%f", &num);

	//saida
	printf("O quadrado de %.2f é %.2f!", num, num*num);

	return 0;

}
