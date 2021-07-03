#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
	int qtd_pares, valor=0, contador_pares=0, soma_pares=0;
	
	printf("Quantos numeros pares deseja somar?");
	scanf("%d", &qtd_pares);
	while (contador_pares < qtd_pares) {
		valor = valor + 2;
		soma_pares = soma_pares + valor;
		contador_pares++;
	
	
	}
	printf("A soma dos %d primeiros numeros pares é %d.", qtd_pares, soma_pares);
	return 0;
	
	}
