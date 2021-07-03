//Ler uma temperatura em graus Farenheit e apresentá-la convertida em graus Celsius.
//C = 5.0 * (F - 32.0)/9.0,
#include<stdio.h>

int main() {

	//Declarar Variaveis
	float tempFarenheit;

	//Entrada
	printf("Digite a temperatura em graus Farenheit: ");
	scanf("%f", &tempFarenheit);

	//Processamento

	//Saída
	printf("%.2f graus Farenheit corresponde a %.2f graus Celsius.",
			tempFarenheit, (5.0 * (tempFarenheit - 32.0)) / 9.0);

	return 0;

}
