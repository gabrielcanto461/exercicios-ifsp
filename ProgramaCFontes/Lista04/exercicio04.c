/*Faça um programa em que o usuário informe o quantidade de números que deseja somar,

depois leia a quantidade indicada por ele, e no final imprima a soma dos números.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int qtd, num, soma=0, contador=0;

	printf("Digite a quantidade de números que deseja somar: ");
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
