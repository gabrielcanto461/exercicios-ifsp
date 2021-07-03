//Ler 3 numeros e exibir a soma dos quadrados dos tres valores

#include<stdio.h>

int main(){
	setbuf(stdout,NULL);

	//declarar variaveis
	float primeiroValor, segundoValor, terceiroValor, somaDosQuadrados;


	//entradas
	printf("Digite o primeiro valor: ");
	scanf("%f", &primeiroValor);

	printf("Digite o segundo valor: ");
	scanf("%f", &segundoValor);

	printf("Digite o terceiro valor: ");
	scanf("%f", &terceiroValor);

	//processamento
	somaDosQuadrados = primeiroValor*primeiroValor + segundoValor*segundoValor + terceiroValor*terceiroValor;



	//saida
	printf("A soma dos quadrados dos três valores é %.2f.", somaDosQuadrados);

	return 0;

}
