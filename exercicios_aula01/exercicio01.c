//ler tres valores inteiros e exibir a soma deles

#include <stdio.h>

int main() {

	//declarar variaveis
	int a,b,c;

	//entrada
	printf("Digite tres numeros inteiros: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	//saida
	printf("A soma de %d, %d e %d é %d.", a, b, c, a+b+c);

	return 0;



}
