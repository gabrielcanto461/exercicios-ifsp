//Ler uma distância em milhas e apresentá-la convertida em quilômetros
//K = 1.61 * M

#include<stdio.h>

int main() {

	setbuf (stdout, NULL);

	//declarar variaveis
	float distanciaMilhas;

	//entrada
	printf("Digite a distância em milhas: ");
	scanf("%f", &distanciaMilhas);

	//saída
	printf("%.2f milhas é equivalente a %.2f quilômetros.", distanciaMilhas, distanciaMilhas * 1.61);

	return 0;



}
