//Ler um valor de volume em m3 e apresenta-lo convertido em litros

#include <stdio.h>

int main() {

	setbuf (stdout, NULL);

	//declarar v�riaveis

	float volumeM3;

	//entrada
	printf("Digite o volume em metros c�bicos: ");
	scanf("%f", &volumeM3);

	//saida
	printf("O volume inserido corresponde a %.2f litros.", volumeM3 * 1000);

	return 0;

}
