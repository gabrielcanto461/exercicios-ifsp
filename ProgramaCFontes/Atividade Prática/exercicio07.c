//Ler quatro notas e imprimir a m�dia aritmetica

#include<stdio.h>

int main() {

	setbuf(stdout, NULL);

	//declarar v�riaveis

	float nota1, nota2, nota3, nota4, media;

	//entrada

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);

	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);

	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);

	//processamento

	media = (nota1 + nota2 + nota3 + nota4)/4;

	//saida

	printf("A m�dia aritm�tica das quatro notas �: %.2f.", media);

	return 0;






}
