//Atividade Prática Individual 2
/*7. Faça um programa que mostre ao usuário um menu com 4 opções de operações
 matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e seu programa
 então pede dois valores e realiza a operação escolhida, mostrando o resultado e saindo do
 programa. */

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int opcao;
	float valorA, valorB;

	printf("                Menu de Operações Matemáticas\n");
	printf("-------------------------------------------------------------\n");
	printf("                Opção 1 ------------ Soma\n");
	printf("                Opção 2 ------------ Subtração\n");
	printf("                Opção 3 ------------ Multiplicação\n");
	printf("                Opção 4 ------------ Divisão\n");
	printf("--------------------------------------------------------------\n");
	printf("Digite um numero de 1 a 4 para escolher a operação desejada: ");
	scanf("%d", &opcao);
	printf("--------------------------------------------------------------\n");

	switch (opcao) {
	case 1:
		printf("A operação escolhida foi a Soma.\n");
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
		printf("A operação escolhida foi a Subtração.\n");
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
		printf("A operação escolhida foi a Multiplicação.\n");
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
		printf("A operação escolhida foi a Divisão.\n");
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
			printf("Segundo valor digitado é inválido!\n");
		} else {
			printf("%.2f / %.2f = %.2f", valorA, valorB, valorA / valorB);
		}
		break;
	default:
		printf("Valor digitado não corresponde a nenhuma opção.");
		break;
		return 0;
	}
}
