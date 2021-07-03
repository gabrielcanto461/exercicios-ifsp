//Ler um numero real e exibir sua quinta parte

#include <stdio.h>

int main() {

	//declarar variavel
	float num;

	//entrada
	printf("Digite um número real: ");
	scanf("%f", &num);

	//saida
	printf("A quinta parte deste número é %.2f!", num/5);

	return 0;


}
