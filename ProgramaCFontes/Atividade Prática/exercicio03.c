//Ler uma dist�ncia em milhas e apresent�-la convertida em quil�metros
//K = 1.61 * M

#include<stdio.h>

int main() {

	setbuf (stdout, NULL);

	//declarar variaveis
	float distanciaMilhas;

	//entrada
	printf("Digite a dist�ncia em milhas: ");
	scanf("%f", &distanciaMilhas);

	//sa�da
	printf("%.2f milhas � equivalente a %.2f quil�metros.", distanciaMilhas, distanciaMilhas * 1.61);

	return 0;



}
