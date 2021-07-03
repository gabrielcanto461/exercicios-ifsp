//recebe altura de degrau e altura que o usuario deseja alcançar
//calcular e mostrar qnts degraus serao necessario

#include <stdio.h>
int main(){
	setbuf(stdout, NULL);

	float degrau, altura;

	printf("Digite a altura em centímetros do degrau: ");
	scanf("%f", &degrau);

	printf("Digite a altura em metros que deseja alcançar: ");
	scanf("%f", &altura);

	printf("Serão necessários %.2f degraus.", altura*100/degrau);

	return 0;

}
