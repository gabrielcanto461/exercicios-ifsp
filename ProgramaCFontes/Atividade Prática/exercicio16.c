// Sendo o o custo de um encanador 30 reais/dia
//solicitar o numero de dias e imprimir quantia liquida paga
//uma vez que sao descontados 8% de imposto de renda

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float custoDia, numeroDias, custoTotal;

	printf("Digite o n�mero de dias que ser�o trabalhados pelo encanador: ");
	scanf("%f", &numeroDias);

	custoDia = 30.00;
	custoTotal = custoDia*numeroDias*0.92;

	printf("A quantia l�quida que dever� ser paga � de R$ %.2f.",custoTotal);

	return 0;

}
