//Dividir 780.000 sendo que o primeiro ganhador recebera 46%, o segundo 32% e outro o restante

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	//variaveis
	float total, primeiro, segundo, terceiro;

	//processamento
	total = 780000;
	primeiro = 0.46 * total;
	segundo = 0.32 * total;
	terceiro = 780000 - (primeiro + segundo);

	//saída
	printf(
			"O primeiro ficará com %.2f reais, o segundo %.2f reais e o terceiro %.2f reais.",
			primeiro, segundo, terceiro);

	return 0;

}
