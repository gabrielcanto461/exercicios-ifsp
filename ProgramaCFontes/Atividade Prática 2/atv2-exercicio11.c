//Atividade Prática Individual 2
/*11. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a
 tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int faltas;
	float nota;

	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);

	printf("Digite as faltas: ");
	scanf("%d", &faltas);

	if (faltas <= 20) {
		if (nota > 10 || nota < 0 || faltas < 0) {
		printf("Valor inválido!");

		} else if (nota >= 9) {
			printf("------------------------\n");
			printf("Conceito: A");

		} else if (nota >= 7.5) {
			printf("--------------------------\n");
			printf("Conceito: B");

		} else if (nota >= 5) {
			printf("--------------------------\n");
			printf("Conceito: C");

		} else if (nota >= 4.0) {
			printf("--------------------------\n");
			printf("Conceito: D");

		} else if (nota >= 0) {
			printf("--------------------------\n");
			printf("Conceito: E");

		}

	} else {
		if (nota >= 9 && nota <= 10) {
			printf("--------------------------\n");
			printf("Conceito: B");

		} else if (nota >= 7.5) {
			printf("--------------------------\n");
			printf("Conceito: C");

		} else if (nota >= 5) {
			printf("--------------------------\n");
			printf("Conceito: D");

		} else if (nota >= 4.0) {
			printf("--------------------------\n");
			printf("Conceito: E");

		} else if (nota >= 0) {
			printf("--------------------------\n");
			printf("Conceito: E");

		}
		return 0;
	}
}
