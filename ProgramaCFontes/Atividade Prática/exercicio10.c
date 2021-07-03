//ler um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	//variaveis
	int numero, soma;

	//entrada
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);

	//processamento
	soma = (3*numero + 1) + (2*numero -1);

	//saída
	printf("A soma do sucessor do triplo de %d com o antecessor de seu dobro é  %d.", numero, soma);

	return 0;



}
