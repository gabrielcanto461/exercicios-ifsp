//Atividade Prática Individual 2
/*12. Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo
 com a tabela abaixo*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float peso, altura, imc;

	printf("Digite a sua altura em metros: ");
	scanf("%f", &altura);

	printf("Digite seu peso em Kg: ");
	scanf("%f", &peso);

	imc = peso / (altura * altura);
	printf("------------------------------------\n");
	if (imc < 18.5) {

		printf("Abaixo do Peso!");

	} else if (imc < 24.9) {

		printf("Saudável!");

	} else if (imc < 29.9) {

		printf("Peso em excesso!");

	} else if (imc < 34.9) {

		printf("Obesidade Grau I!");

	} else if (imc < 39.9) {

		printf("Obesidade Grau II (severa)!");

	} else {

		printf("Obesidade Grau III (mórbida)!");
	}
	return 0;
}
