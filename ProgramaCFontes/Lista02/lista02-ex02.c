//Ler dois n�meros e mostrar qual deles � o maior.

#include <stdio.h>
int main() {

	setbuf(stdout, NULL);

	float n1, n2;

	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);

	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);

	if (n1 > n2) {

		printf("O maior n�mero � %.2f.", n1);
	} else if (n2 > n1) {

		printf("O maior n�mero � %.2f.", n2);
	} else {
		printf("Os valores s�o iguais!");
	}
	return 0;
}
