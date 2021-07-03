/*4. Faça um programa de leia N números inteiros (N deve ser fornecido pelo usuário),
 depois imprima somente os números ímpares.*/

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);

	int n, numero;
	printf("Digite a quantidade de números para serem lidos: ");
	scanf("%d", &n);

	for (int i=1; i < n; i++) {
		printf("Digite um número: ");
		scanf("%d", &numero);

		if (numero % 3 == 0) {
			printf("%d", numero);
		}

	}

	return 0;
}
