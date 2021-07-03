//Ler um numero real e exibir sua quinta parte

#include <stdio.h>

int main() {

	//declarar variavel
	float num;

	//entrada
	printf("Digite um número real: ");
	scanf("%f", &num);

	//saida
	printf("A quinta parte de %.2f é %.2f!", num, num/5);

	return 0;


}
