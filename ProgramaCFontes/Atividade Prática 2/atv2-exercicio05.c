//Atividade Pr�tica Individual 2
/*Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o m�s
 correspendente a este n�mero. Isto �, janeiro se 1, fevereiro se 2, e assim por diante.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int numeroMes;
	printf("Digite um numero entre 1 e 12: ");
	scanf("%d", &numeroMes);

	switch (numeroMes) {
	case 1:
		printf("O m�s correspondente a %d � Janeiro.", numeroMes);
		break;
	case 2:
		printf("O m�s correspondente a %d � Fevereiro.", numeroMes);
		break;
	case 3:
		printf("O m�s correspondente a %d � Mar�o.", numeroMes);
		break;
	case 4:
		printf("O m�s correspondente a %d � Abril.", numeroMes);
		break;
	case 5:
		printf("O m�s correspondente a %d � Maio.", numeroMes);
		break;
	case 6:
		printf("O m�s correspondente a %d � Junho.", numeroMes);
		break;
	case 7:
		printf("O m�s correspondente a %d � Julho.", numeroMes);
		break;
	case 8:
		printf("O m�s correspondente a %d � Agosto.", numeroMes);
		break;
	case 9:
		printf("O m�s correspondente a %d � Setembro.", numeroMes);
		break;
	case 10:
		printf("O m�s correspondente a %d � Outubro.", numeroMes);
		break;
	case 11:
		printf("O m�s correspondente a %d � Novembro.", numeroMes);
		break;
	case 12:
		printf("O m�s correspondente a %d � Dezembro.", numeroMes);
		break;
	default:
		printf("O n�mero digitado � inv�lido.");
		break;

	return 0;
	}
}
