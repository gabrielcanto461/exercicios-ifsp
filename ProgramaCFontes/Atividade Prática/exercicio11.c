//Ler o valor do raio de um circulo calcule e imprima a area deste

#include <stdio.h>
#define pi 3.141592 //definir o valor de pi

int main() {

	setbuf(stdout, NULL);

	//variaveis
	float raio;

	//entrada
	printf("Digite o raio do c�rculo: ");
	scanf("%f", &raio);

	//saida
	printf("A �rea do c�rculo � %.2f.", raio*raio*pi);

	return 0;


}
