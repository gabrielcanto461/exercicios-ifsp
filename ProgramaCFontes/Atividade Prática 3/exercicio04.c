/*4. Fa�a um programa de leia N n�meros inteiros (N deve ser fornecido pelo usu�rio),
 depois imprima somente os n�meros �mpares.*/

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);

	int n, numero;
	printf("Digite a quantidade de n�meros para serem lidos: ");
	scanf("%d", &n);

	for (int i=1; i < n; i++) {
		printf("Digite um n�mero: ");
		scanf("%d", &numero);

		if (numero % 3 == 0) {
			printf("%d", numero);
		}

	}

	return 0;
}
