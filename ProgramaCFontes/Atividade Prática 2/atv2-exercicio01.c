//Atividade Pr�tica Individual 2
/*1. Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a
presta��o for maior que 20% do sal�rio, imprima: �empr�stimo n�o concedido�, caso
contr�rio, imprima: �empr�stimo concedido� */

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float salario, prestacaoEmprestimo;

	printf("Digite o seu sal�rio: ");
	scanf("%f", &salario);

	printf("Digite o valor da presta��o do empr�stimo: ");
	scanf("%f", &prestacaoEmprestimo);

	(prestacaoEmprestimo > 0.2 * salario) ? printf("Empr�stimo n�o concedido!"):
											printf("Empr�stimo concedido!");



	return 0;

}
