/*Fa�a um programa em que o usu�rio informe o quantidade de n�meros que deseja somar,

depois leia a quantidade indicada por ele, e no final imprima a soma dos n�meros.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int qtd, num, soma=0, contador=0;

	printf("Digite a quantidade de n�meros que deseja somar: ");
	scanf("%d", &qtd);

	while (contador < qtd) {

		printf("Digite o valor para somar: ");
		scanf("%d", &num);

		soma = soma + num;
		contador++;
	}
	printf("-------------------------------\n");
	printf("Soma = %d", soma);

	return 0;





}
