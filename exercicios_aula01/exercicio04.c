//Ler uma temperatura em graus celsius e apresent�-la convertida em graus Fahrenheit.
//F = C * (9.0/5.0) + 32.0
#include<stdio.h>

int main() {

	//Declarar Variaveis
	float tempCelsius;

	//Entrada
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &tempCelsius);


	//Processamento


	//Sa�da
	printf("%.2f graus Celsius corresponde a %.2f graus Farenheit.", tempCelsius, (tempCelsius*(9.0/5.0))+32.0);

	return 0;

}
