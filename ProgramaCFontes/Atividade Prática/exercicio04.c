//Ler um angulo em radianos e exibir convertido para graus.
//G = R * 180 / pi

#include <stdio.h>
#define pi 3.14 //define a constante pi como 3.14

int main() {
	setbuf (stdout, NULL);

	//declarar variaveis
	float radianos;

	//entrada
	printf("Digite o �ngulo em radianos: ");
	scanf("%f", &radianos);

	//saida
	printf("O �ngulo digitado equivale a %.2f graus.", radianos*180/pi);

	return 0;




}
