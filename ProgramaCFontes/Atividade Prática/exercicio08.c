//Ler um valor em real e a cota��o do dolar e imprima o valor correspondente em dolar

#include<stdio.h>

int main() {

	setbuf(stdout, NULL);

	//declarar variaveis

	float valorReal, cotacao;

	//entradas
	printf("Digite o valor em Real: ");
	scanf("%f", &valorReal);

	printf("Digite a cota��o atual do D�lar: ");
	scanf("%f", &cotacao);

	printf("\n");
	//saida

	printf("O valor inserido corresponde a %.2f d�lares.", valorReal/cotacao);

	return 0;



}
