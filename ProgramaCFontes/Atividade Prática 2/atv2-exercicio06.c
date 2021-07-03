//Atividade Pr�tica Individual 2
/*Fa�a um programa que calcule e mostre a �rea de um trap�zio. Sabe-se que:
 �rea = ((basemaior + basemenor) * altura ) / 2
 *lembre-se que a base maior e a base menor devem ser n�meros maiores que zero.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);
	float baseMenor, baseMaior, area, altura;

	printf(" Calculadora de �rea de Trap�zios\n");
	printf("----------------------------------\n");
	printf("Digite a base maior do trap�zio: ");
	scanf("%f", &baseMaior);

	if (baseMaior < 0) {
		printf("Valor digitado para base maior � inv�lido.");
		return 0;
	} else {
		printf("Digite a base menor do trap�zio: ");
		scanf("%f", &baseMenor);
	}
	if (baseMenor < 0 || baseMaior <= baseMenor) {
		printf("Valor digitado para base menor � inv�lido.\n");
		return 0;
	} else {

		printf("Digite a altura do trap�zio: ");
		scanf("%f", &altura);
//considerando que n�o h� altura negativa tamb�m
	}
	if (altura < 0) {
		printf("Valor digitado para a altura � inv�lido!\n");
		return 0;
	} else {
		area = ((baseMaior + baseMenor) * altura) / 2;

		printf("----------------------------------\n");
		printf("�rea do trap�zio: %.2f u.a.", area);
	}
		return 0;
}
