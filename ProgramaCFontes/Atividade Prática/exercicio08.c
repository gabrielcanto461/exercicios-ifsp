//Ler um valor em real e a cotação do dolar e imprima o valor correspondente em dolar

#include<stdio.h>

int main() {

	setbuf(stdout, NULL);

	//declarar variaveis

	float valorReal, cotacao;

	//entradas
	printf("Digite o valor em Real: ");
	scanf("%f", &valorReal);

	printf("Digite a cotação atual do Dólar: ");
	scanf("%f", &cotacao);

	printf("\n");
	//saida

	printf("O valor inserido corresponde a %.2f dólares.", valorReal/cotacao);

	return 0;



}
