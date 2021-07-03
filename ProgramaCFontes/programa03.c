//Ler o valor total de um pedido de venda e apresentar esse valor e as opções de pagamento com descontos de 5% e 10%

#include <stdio.h>

int main(){

	//declarar variaveis
	float valorTotalVendas;

	//entrada
	printf("Informe o total de vendas: \n");
	scanf("%f", &valorTotalVendas);

	//saida
	printf("INFORMATIVO DE VENDAS\n");
	printf("=====================\n");
	printf("Valor Total: R$ %.2f\n", valorTotalVendas);
	printf("Valor com 5%% de desconto: R$ %.2f\n", valorTotalVendas*0.95);
	printf("Valor com 10%% de desconto: R$ %.2f\n", valorTotalVendas*0.90);


}
