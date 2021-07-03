/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	int num;
	float soma = 0;

	for(int i=1; i<=10; i++){

		printf("Digite um inteiro: ");
		scanf("%d", &num);

		soma = soma + num;

	}
	printf("----------------------------------\n");
	printf("Média dos valores digitados: %.2f", soma/10);

	return 0;



}
