//Ler um numero inteiro e imprimir o antecessor e sucessor

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	//declarar variaveis

	int numero, antecessor, sucessor;

	//entrada

	printf("Digite um n�mero: ");
	scanf("%d", &numero);

	//processamento

	antecessor = numero - 1;
	sucessor = numero + 1;

	//sa�da

	printf("O antecessor de %d � %d e seu sucessor � %d.", numero, antecessor, sucessor);

	return 0;
}
