/* A partir de um total lido, mostrar o total com 10% de desconto
 o valor de cada parcela em 3x sem juros, comissao do vendedor sendo a vista
 5% sobre o valor com desconto e parcelado sendo 5% do valor total */

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	//declarar variaveis
	float total;

	//entrada
	printf("Digite o valor total da venda: ");
	scanf("%f", &total);

	//processamento

	//saida
	printf("Valor total com 10%% de desconto: R$ %.2f\n", 0.9 * total);
	printf("Valor cada parcela, no parcelamento de 3x sem juros: R$ %.2f\n",
			total / 3);
	printf("Comissão do vendedor, no caso de venda a vista: R$ %.2f\n",
			0.05 * 0.9 * total);
	printf("Comissão do vendedor, no caso de venda parcelada: R$ %.2f",
			0.05 * total);

	return 0;
}

