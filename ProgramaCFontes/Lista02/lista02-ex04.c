//Ler 2 notas verificar se s�o validas se sim colocar a media se nao
//informar ao usuario e o programa termina

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float nota1, nota2;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);

	if (nota1 < 0 || nota1 > 10) {
		printf("O valor %.2f � inv�lido!", nota1);
	} else {
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		if (nota2 < 0 || nota2 > 10) {
			printf("O valor %.2f � inv�lido!", nota2);
		} else {
			printf("A m�dia do aluno foi %.2f", (nota1 + nota2) / 2);
		}
	}

	return 0;
}
