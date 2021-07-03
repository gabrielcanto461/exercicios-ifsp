//Ler o valor de um produto e imprima o valor com desconto de 12%

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float valor;

	printf("Digite o valor do produto: ");
	scanf("%f", &valor);

	printf("--------------------------------------------------\n");

	printf("O valor do produto com desconto de 12%% é: %.2f", valor*0.88);

	return 0;


}
