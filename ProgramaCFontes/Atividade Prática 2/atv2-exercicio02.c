//Atividade Pr�tica Individual 2
/*2. Fa�a um programa que receba a altura e o sexo de uma pessoa. Calcule e mostre seu
 peso ideal, utilizando as seguintes f�rmulas (onde h corresponde � altura):
 �Homens: (72.7 * h) - 58
 �Mulheres: (62,1 * h) - 44.7 */

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float sexo;
	float altura, pesoIdeal;

	printf("Digite o seu sexo sendo 0 para Masculino e 1 para Feminino: ");
	scanf("%f", &sexo);

	if (sexo != 0 && sexo != 1) {
		printf("Valor inv�lido!");
	} else {
		printf("Digite a altura (em metros): ");
		scanf("%f", &altura);
		if (sexo == 1){

			pesoIdeal = (72.7 * altura) - 58;

		}else{
			pesoIdeal = (62.1 * altura) - 44.7;
		}
		printf("O seu peso ideal �: %.2f", pesoIdeal);
	}

	return 0;

}
