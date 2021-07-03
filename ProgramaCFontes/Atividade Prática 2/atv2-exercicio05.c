//Atividade Prática Individual 2
/*Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
 correspendente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int numeroMes;
	printf("Digite um numero entre 1 e 12: ");
	scanf("%d", &numeroMes);

	switch (numeroMes) {
	case 1:
		printf("O mês correspondente a %d é Janeiro.", numeroMes);
		break;
	case 2:
		printf("O mês correspondente a %d é Fevereiro.", numeroMes);
		break;
	case 3:
		printf("O mês correspondente a %d é Março.", numeroMes);
		break;
	case 4:
		printf("O mês correspondente a %d é Abril.", numeroMes);
		break;
	case 5:
		printf("O mês correspondente a %d é Maio.", numeroMes);
		break;
	case 6:
		printf("O mês correspondente a %d é Junho.", numeroMes);
		break;
	case 7:
		printf("O mês correspondente a %d é Julho.", numeroMes);
		break;
	case 8:
		printf("O mês correspondente a %d é Agosto.", numeroMes);
		break;
	case 9:
		printf("O mês correspondente a %d é Setembro.", numeroMes);
		break;
	case 10:
		printf("O mês correspondente a %d é Outubro.", numeroMes);
		break;
	case 11:
		printf("O mês correspondente a %d é Novembro.", numeroMes);
		break;
	case 12:
		printf("O mês correspondente a %d é Dezembro.", numeroMes);
		break;
	default:
		printf("O número digitado é inválido.");
		break;

	return 0;
	}
}
