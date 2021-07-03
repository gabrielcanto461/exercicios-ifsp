//Atividade Prática Individual 2
/*Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
 Área = ((basemaior + basemenor) * altura ) / 2
 *lembre-se que a base maior e a base menor devem ser números maiores que zero.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);
	float baseMenor, baseMaior, area, altura;

	printf(" Calculadora de Área de Trapézios\n");
	printf("----------------------------------\n");
	printf("Digite a base maior do trapézio: ");
	scanf("%f", &baseMaior);

	if (baseMaior < 0) {
		printf("Valor digitado para base maior é inválido.");
		return 0;
	} else {
		printf("Digite a base menor do trapézio: ");
		scanf("%f", &baseMenor);
	}
	if (baseMenor < 0 || baseMaior <= baseMenor) {
		printf("Valor digitado para base menor é inválido.\n");
		return 0;
	} else {

		printf("Digite a altura do trapézio: ");
		scanf("%f", &altura);
//considerando que não há altura negativa também
	}
	if (altura < 0) {
		printf("Valor digitado para a altura é inválido!\n");
		return 0;
	} else {
		area = ((baseMaior + baseMenor) * altura) / 2;

		printf("----------------------------------\n");
		printf("Área do trapézio: %.2f u.a.", area);
	}
		return 0;
}
