//Atividade Pr�tica Individual 2
/*7. Fa�a um programa que mostre ao usu�rio um menu com 4 op��es de opera��es
 matem�ticas (as b�sicas, por exemplo). O usu�rio escolhe uma das op��es e seu programa
 ent�o pede dois valores e realiza a opera��o escolhida, mostrando o resultado e saindo do
 programa. */

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int opcao;
	float valorA, valorB;

	printf("                Menu de Opera��es Matem�ticas\n");
	printf("-------------------------------------------------------------\n");
	printf("                Op��o 1 ------------ Soma\n");
	printf("                Op��o 2 ------------ Subtra��o\n");
	printf("                Op��o 3 ------------ Multiplica��o\n");
	printf("                Op��o 4 ------------ Divis�o\n");
	printf("--------------------------------------------------------------\n");
	printf("Digite um numero de 1 a 4 para escolher a opera��o desejada: ");
	scanf("%d", &opcao);
	printf("--------------------------------------------------------------\n");

	switch (opcao) {
	case 1:
		printf("A opera��o escolhida foi a Soma.\n");
		printf(
				"--------------------------------------------------------------\n");

		printf("Digite o primeiro valor: ");
		scanf("%f", &valorA);

		printf("Digite o segundo valor: ");
		scanf("%f", &valorB);

		printf(
				"--------------------------------------------------------------\n");

		printf("%.2f + %.2f = %.2f", valorA, valorB, valorA + valorB);
		break;
	case 2:
		printf("A opera��o escolhida foi a Subtra��o.\n");
		printf(
				"--------------------------------------------------------------\n");

		printf("Digite o primeiro valor: ");
		scanf("%f", &valorA);

		printf("Digite o segundo valor: ");
		scanf("%f", &valorB);

		printf(
				"--------------------------------------------------------------\n");

		printf("%.2f - %.2f = %.2f", valorA, valorB, valorA - valorB);
		break;
	case 3:
		printf("A opera��o escolhida foi a Multiplica��o.\n");
		printf(
				"--------------------------------------------------------------\n");

		printf("Digite o primeiro valor: ");
		scanf("%f", &valorA);

		printf("Digite o segundo valor: ");
		scanf("%f", &valorB);

		printf(
				"--------------------------------------------------------------\n");

		printf("%.2f X %.2f = %.2f", valorA, valorB, valorA * valorB);
		break;
	case 4:
		printf("A opera��o escolhida foi a Divis�o.\n");
		printf(
				"--------------------------------------------------------------\n");

		printf("Digite o primeiro valor: ");
		scanf("%f", &valorA);

		printf("Digite o segundo valor: ");
		scanf("%f", &valorB);

		printf(
				"--------------------------------------------------------------\n");
		//if para garantir que nao tenha divisao por zero
		if (valorB == 0) {
			printf("Segundo valor digitado � inv�lido!\n");
		} else {
			printf("%.2f / %.2f = %.2f", valorA, valorB, valorA / valorB);
		}
		break;
	default:
		printf("Valor digitado n�o corresponde a nenhuma op��o.");
		break;
		return 0;
	}
}
