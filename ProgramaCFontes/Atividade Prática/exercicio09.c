//Ler um numero inteiro e imprimir o antecessor e sucessor

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	//declarar variaveis

	int numero, antecessor, sucessor;

	//entrada

	printf("Digite um número: ");
	scanf("%d", &numero);

	//processamento

	antecessor = numero - 1;
	sucessor = numero + 1;

	//saída

	printf("O antecessor de %d é %d e seu sucessor é %d.", numero, antecessor, sucessor);

	return 0;
}
