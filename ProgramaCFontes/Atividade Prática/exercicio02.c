//Ler uma velocidade em km/h e apresenta-la convertida em m/s.
//M = K / 3.6

#include <stdio.h>

int main(){

	setbuf (stdout, NULL);

	//Declara��o das variaveis
	float velocidadeKmH;

	//Entrada
	printf("Digite a velocidade em Quil�metros por Hora: ");
	scanf("%f", &velocidadeKmH);

	//Sa�da
	printf("%.2f Km/h corresponde a %.2f m/s (metros por segundo).", velocidadeKmH, velocidadeKmH/3.6);

	return 0;






}
