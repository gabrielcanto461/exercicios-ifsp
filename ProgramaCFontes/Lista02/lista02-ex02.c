//Ler dois números e mostrar qual deles é o maior.

#include <stdio.h>
int main() {

	setbuf(stdout, NULL);

	float n1, n2;

	printf("Digite o primeiro número: ");
	scanf("%f", &n1);

	printf("Digite o segundo número: ");
	scanf("%f", &n2);

	if (n1 > n2) {

		printf("O maior número é %.2f.", n1);
	} else if (n2 > n1) {

		printf("O maior número é %.2f.", n2);
	} else {
		printf("Os valores são iguais!");
	}
	return 0;
}
