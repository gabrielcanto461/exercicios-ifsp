//Atividade Prática Individual 2
/*1. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário, imprima: “empréstimo não concedido”, caso
contrário, imprima: “empréstimo concedido” */

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float salario, prestacaoEmprestimo;

	printf("Digite o seu salário: ");
	scanf("%f", &salario);

	printf("Digite o valor da prestação do empréstimo: ");
	scanf("%f", &prestacaoEmprestimo);

	(prestacaoEmprestimo > 0.2 * salario) ? printf("Empréstimo não concedido!"):
											printf("Empréstimo concedido!");



	return 0;

}
