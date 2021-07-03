/*Faça um programa em C que receba um inteiro do usuário, indicando qual tabuada ele
 quer imprimir, depois, o programa deve imprimir uma tabela com a tabuada selecioanda
 (de 1 a 10). Usar somente estrutura de decisão*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int tabuada;

	printf(
			"Digite o número correspondente a tabuada (de 1 a 10) que deseja imprimir: ");
	scanf("%d", &tabuada);

	switch (tabuada) {
	case 1:
		printf("1 X  1 = %d\n", tabuada * 1);
		printf("1 X  2 = %d\n", tabuada * 2);
		printf("1 X  3 = %d\n", tabuada * 3);
		printf("1 X  4 = %d\n", tabuada * 4);
		printf("1 X  5 = %d\n", tabuada * 5);
		printf("1 X  6 = %d\n", tabuada * 6);
		printf("1 X  7 = %d\n", tabuada * 7);
		printf("1 X  8 = %d\n", tabuada * 8);
		printf("1 X  9 = %d\n", tabuada * 9);
		printf("1 X 10 = %d\n", tabuada * 10);
		break;
	case 2:
		printf("2 X  1 = %d\n", tabuada * 1);
		printf("2 X  2 = %d\n", tabuada * 2);
		printf("2 X  3 = %d\n", tabuada * 3);
		printf("2 X  4 = %d\n", tabuada * 4);
		printf("2 X  5 = %d\n", tabuada * 5);
		printf("2 X  6 = %d\n", tabuada * 6);
		printf("2 X  7 = %d\n", tabuada * 7);
		printf("2 X  8 = %d\n", tabuada * 8);
		printf("2 X  9 = %d\n", tabuada * 9);
		printf("2 X 10 = %d\n", tabuada * 10);
		break;
	case 3:
		printf("3 X  1 = %d\n", tabuada * 1);
		printf("3 X  2 = %d\n", tabuada * 2);
		printf("3 X  3 = %d\n", tabuada * 3);
		printf("3 X  4 = %d\n", tabuada * 4);
		printf("3 X  5 = %d\n", tabuada * 5);
		printf("3 X  6 = %d\n", tabuada * 6);
		printf("3 X  7 = %d\n", tabuada * 7);
		printf("3 X  8 = %d\n", tabuada * 8);
		printf("3 X  9 = %d\n", tabuada * 9);
		printf("3 X 10 = %d\n", tabuada * 10);
		break;

	case 4:
		printf("4 X  1 = %d\n", tabuada * 1);
		printf("4 X  2 = %d\n", tabuada * 2);
		printf("4 X  3 = %d\n", tabuada * 3);
		printf("4 X  4 = %d\n", tabuada * 4);
		printf("4 X  5 = %d\n", tabuada * 5);
		printf("4 X  6 = %d\n", tabuada * 6);
		printf("4 X  7 = %d\n", tabuada * 7);
		printf("4 X  8 = %d\n", tabuada * 8);
		printf("4 X  9 = %d\n", tabuada * 9);
		printf("4 X 10 = %d\n", tabuada * 10);
		break;
	case 5:
		printf("5 X  1 = %d\n", tabuada * 1);
		printf("5 X  2 = %d\n", tabuada * 2);
		printf("5 X  3 = %d\n", tabuada * 3);
		printf("5 X  4 = %d\n", tabuada * 4);
		printf("5 X  5 = %d\n", tabuada * 5);
		printf("5 X  6 = %d\n", tabuada * 6);
		printf("5 X  7 = %d\n", tabuada * 7);
		printf("5 X  8 = %d\n", tabuada * 8);
		printf("5 X  9 = %d\n", tabuada * 9);
		printf("5 X 10 = %d\n", tabuada * 10);
		break;
	case 6:
		printf("6 X  1 = %d\n", tabuada * 1);
		printf("6 X  2 = %d\n", tabuada * 2);
		printf("6 X  3 = %d\n", tabuada * 3);
		printf("6 X  4 = %d\n", tabuada * 4);
		printf("6 X  5 = %d\n", tabuada * 5);
		printf("6 X  6 = %d\n", tabuada * 6);
		printf("6 X  7 = %d\n", tabuada * 7);
		printf("6 X  8 = %d\n", tabuada * 8);
		printf("6 X  9 = %d\n", tabuada * 9);
		printf("6 X 10 = %d\n", tabuada * 10);
		break;
	case 7:
		printf("7 X  1 = %d\n", tabuada * 1);
		printf("7 X  2 = %d\n", tabuada * 2);
		printf("7 X  3 = %d\n", tabuada * 3);
		printf("7 X  4 = %d\n", tabuada * 4);
		printf("7 X  5 = %d\n", tabuada * 5);
		printf("7 X  6 = %d\n", tabuada * 6);
		printf("7 X  7 = %d\n", tabuada * 7);
		printf("7 X  8 = %d\n", tabuada * 8);
		printf("7 X  9 = %d\n", tabuada * 9);
		printf("7 X 10 = %d\n", tabuada * 10);
		break;
	case 8:
		printf("8 X  1 = %d\n", tabuada * 1);
		printf("8 X  2 = %d\n", tabuada * 2);
		printf("8 X  3 = %d\n", tabuada * 3);
		printf("8 X  4 = %d\n", tabuada * 4);
		printf("8 X  5 = %d\n", tabuada * 5);
		printf("8 X  6 = %d\n", tabuada * 6);
		printf("8 X  7 = %d\n", tabuada * 7);
		printf("8 X  8 = %d\n", tabuada * 8);
		printf("8 X  9 = %d\n", tabuada * 9);
		printf("8 X 10 = %d\n", tabuada * 10);
		break;
	case 9:
		printf("9 X  1 = %d\n", tabuada * 1);
		printf("9 X  2 = %d\n", tabuada * 2);
		printf("9 X  3 = %d\n", tabuada * 3);
		printf("9 X  4 = %d\n", tabuada * 4);
		printf("9 X  5 = %d\n", tabuada * 5);
		printf("9 X  6 = %d\n", tabuada * 6);
		printf("9 X  7 = %d\n", tabuada * 7);
		printf("9 X  8 = %d\n", tabuada * 8);
		printf("9 X  9 = %d\n", tabuada * 9);
		printf("9 X 10 = %d\n", tabuada * 10);
		break;
	case 10:
		printf("10 X  1 = %d\n", tabuada * 1);
		printf("10 X  2 = %d\n", tabuada * 2);
		printf("10 X  3 = %d\n", tabuada * 3);
		printf("10 X  4 = %d\n", tabuada * 4);
		printf("10 X  5 = %d\n", tabuada * 5);
		printf("10 X  6 = %d\n", tabuada * 6);
		printf("10 X  7 = %d\n", tabuada * 7);
		printf("10 X  8 = %d\n", tabuada * 8);
		printf("10 X  9 = %d\n", tabuada * 9);
		printf("10 X 10 = %d\n", tabuada * 10);
		break;

	default:
		printf("Valor digitado é inválido.");
		break;
	}

	return 0;
}
