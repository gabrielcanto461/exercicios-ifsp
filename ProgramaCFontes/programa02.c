//Ler um valor de um comprimento em polegadas e apresenta-lo convertido em centimetros

#include <stdio.h>

int main(){

	//declarar as variaveis
	//float valorPolegadas, valorCentimetros;

	float valorPolegadas;

	//entrada
	printf("Informe o valor em polegadas: ");
	scanf("%f", &valorPolegadas);

	//processamento
	//valorCentimetros = valorPolegadas * 2.54;

	//saída
	printf("%.2f polegadas equivalem a %.2f centimetros!",valorPolegadas,valorPolegadas*2.54);

	return 0;



}
