//Atividade Praática Individual 2
/*9. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em
 um percurso, calcule o consumo em Km/l e escreve uma mensagem de acordo com a
 indicação a seguir: (1) menor que 8 Km/l => "venda o carro" (2) entre 8 e 14 Km/l =>
 “econômico" e (3) maior que 14 Km/l => “super econômico"*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	float distancia, qtdConsumida, consumoKmL;

	printf("Digite a distância percorrida em quilômetros: ");
	scanf("%f", &distancia);

	printf("Digite a quantidade de litros consumidos: ");
	scanf("%f", &qtdConsumida);

	consumoKmL = distancia / qtdConsumida;

	if (consumoKmL > 14) {
		printf("Super Econômico. Consumo = %.2f Km/L", consumoKmL);
	} else {
		if (consumoKmL > 8) {
			printf("Econômico. Consumo = %.2f Km/L", consumoKmL);

		} else {
			printf("Venda o carro. Consumo = %.2f", consumoKmL);

		}
	}
	return 0;
}
