//Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius.
//C= K - 273.15

#include <stdio.h>

int main(){
	setbuf (stdout, NULL);

	//declarar as variaveis
	float tempKelvin;

	//entrada
	printf("Digite a temperatura em Kelvin: ");
	scanf("%f", &tempKelvin);


	//saida
	printf("%.2f graus Kelvin equivale a %.2f graus Celsius.",tempKelvin, tempKelvin - 273.15);

	return 0;

}
