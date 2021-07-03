//Ler o salario de um funcionario e calcular o novo salario com aumento de 25%

#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	float salario;

	printf("Digite o seu antigo salário: ");
	scanf("%f", &salario);

	printf("Seu novo salário com o aumento de 25%% é %.2f.", salario*1.25);

	return 0;



}
