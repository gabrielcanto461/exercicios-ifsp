//recebe altura de degrau e altura que o usuario deseja alcan�ar
//calcular e mostrar qnts degraus serao necessario

#include <stdio.h>
int main(){
	setbuf(stdout, NULL);

	float degrau, altura;

	printf("Digite a altura em cent�metros do degrau: ");
	scanf("%f", &degrau);

	printf("Digite a altura em metros que deseja alcan�ar: ");
	scanf("%f", &altura);

	printf("Ser�o necess�rios %.2f degraus.", altura*100/degrau);

	return 0;

}
