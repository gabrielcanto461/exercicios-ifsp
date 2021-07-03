//Atividade Prática Individual 2
/*Faça um programa que calcule as raízes da equação do 2o grau.*/

#include <stdio.h>
#include <math.h>

int main() {

	setbuf(stdout, NULL);

	float delta, a, b, c, raiz1, raiz2;

	printf("CALCULADORA DE EQUAÇÃO DE SEGUNDO GRAU\n");
	printf("**************************************\n");

	printf("Digite o coeficiente A: ");
	scanf("%f", &a);
	if (a == 0) {
		printf("Não é equação do segundo grau.");
		return 0;
	} else {
		printf("Digite o coeficiente B: ");
		scanf("%f", &b);

		printf("Digite o coeficiente C: ");
		scanf("%f", &c);
	}
	printf("--------------------------------------\n");

	delta = pow(b, 2) - 4 * a * c;

	if (delta < 0) {
		printf("Não existe raíz real.");

	} else {
		if (delta == 0) {
			raiz1 = (-b / 2 * a);
			printf("Raíz Dupla (única) = %.2f", raiz1);
		} else {

			delta = sqrt(delta);
			raiz1 = (-b + delta) / (2 * a);
			raiz2 = (-b - delta) / (2 * a);
			printf("Raízes: %.2f e %.2f", raiz1, raiz2);

		}
	}
	return 0;
}
