//Atividade Pr�tica Individual 2
/*13. Leia uma data (dia, m�s e ano) e verifique se ela � v�lida. Ou seja, verifique se o m�s est�
 entre 1 e 12, se o dia existe naquele m�s. Note que Fevereio tem 29 dias em anos bissextos
 e 28 dias em anos n�o bissextos.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int dia, mes, ano, bissexto;

	printf("Digite o dia do m�s: ");
	scanf("%d", &dia);

	printf("Digite o n�mero correspondente ao m�s (1 a 12): ");
	scanf("%d", &mes);

	printf("Digite o ano: ");
	scanf("%d", &ano);

	//VERIFICA SE O ANO � BISSEXTO
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
		//VERIFICA SE A DATA � V�LIDA OU INV�LIDA E PRINTA
		if (dia > 0 && dia <= 31) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 2:
		if (bissexto == 1) {
			if (dia > 0 && dia <= 29) {
				printf("A data � v�lida!");
			} else {
				printf("A data � inv�lida, dia inv�lido!");
			}
		} else {
			if (dia > 0 && dia <= 28) {
				printf("A data � v�lida!");
			} else {
				printf("A data � inv�lida, dia inv�lido!");
			}
		}
		break;
	case 3:
		if (dia > 0 && dia <= 31) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 4:
		if (dia > 0 && dia <= 30) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 5:
		if (dia > 0 && dia <= 31) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 6:
		if (dia > 0 && dia <= 30) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 7:
		if (dia > 0 && dia <= 31) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 8:
		if (dia > 0 && dia <= 31) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 9:
		if (dia > 0 && dia <= 30) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 10:
		if (dia > 0 && dia <= 31) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}

		break;
	case 11:
		if (dia > 0 && dia <= 30) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	case 12:
		if (dia > 0 && dia <= 31) {
			printf("A data � v�lida!");
		} else {
			printf("A data � inv�lida, dia inv�lido!");
		}
		break;
	default:
		printf("Data inv�lida, m�s digitado n�o est� entre 1 e 12!");
		break;

	}

}
