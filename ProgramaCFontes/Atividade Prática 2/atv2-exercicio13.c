//Atividade Prática Individual 2
/*13. Leia uma data (dia, mês e ano) e verifique se ela é válida. Ou seja, verifique se o mês está
 entre 1 e 12, se o dia existe naquele mês. Note que Fevereio tem 29 dias em anos bissextos
 e 28 dias em anos não bissextos.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int dia, mes, ano, bissexto;

	printf("Digite o dia do mês: ");
	scanf("%d", &dia);

	printf("Digite o número correspondente ao mês (1 a 12): ");
	scanf("%d", &mes);

	printf("Digite o ano: ");
	scanf("%d", &ano);

	//VERIFICA SE O ANO É BISSEXTO
	if (ano % 400 == 0) {
		bissexto = 1;

	} else {
		if (ano % 4 == 0 && ano % 100 != 0) {
			bissexto = 1;
		} else {
			bissexto = 0;
		}
	}

	switch (mes) {
	case 1:
		//VERIFICA SE A DATA É VÁLIDA OU INVÁLIDA E PRINTA
		if (dia > 0 && dia <= 31) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 2:
		if (bissexto == 1) {
			if (dia > 0 && dia <= 29) {
				printf("A data é válida!");
			} else {
				printf("A data é inválida, dia inválido!");
			}
		} else {
			if (dia > 0 && dia <= 28) {
				printf("A data é válida!");
			} else {
				printf("A data é inválida, dia inválido!");
			}
		}
		break;
	case 3:
		if (dia > 0 && dia <= 31) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 4:
		if (dia > 0 && dia <= 30) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 5:
		if (dia > 0 && dia <= 31) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 6:
		if (dia > 0 && dia <= 30) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 7:
		if (dia > 0 && dia <= 31) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 8:
		if (dia > 0 && dia <= 31) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 9:
		if (dia > 0 && dia <= 30) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 10:
		if (dia > 0 && dia <= 31) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}

		break;
	case 11:
		if (dia > 0 && dia <= 30) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	case 12:
		if (dia > 0 && dia <= 31) {
			printf("A data é válida!");
		} else {
			printf("A data é inválida, dia inválido!");
		}
		break;
	default:
		printf("Data inválida, mês digitado não está entre 1 e 12!");
		break;

	}

}
