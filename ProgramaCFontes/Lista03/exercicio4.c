/*Fa�a um programa que calcular o sal�rio l�quido de um trabalhador. Ser�o fornecidos o
 nome do trabalhador, o valor da hora, n�mero de horas trabalhadas e o % de desconto do
 INSS. No final, imprima todos os dados lidos e o sal�rio l�quido calculado: (valor da hora
 * n�mero de horas trabalhadas ) * (100 - % de desconto do INSS)/100*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	char nome[10];
	float valorHora, numeroHoraTrabalhadas, descontoInss;

	printf("Digite o nome do trabalhador: ");
	gets(nome);

	printf("Digite o valor da hora de trabalho: ");
	scanf("%f", &valorHora);

	printf("Digite o n�mero de horas trabalhadas: ");
	scanf("%f", &numeroHoraTrabalhadas);

	printf("Digite a %% do desconto do INSS: ");
	scanf("%f", &descontoInss);

	printf("-----------------------------------------\n");
	printf("Nome do trabalhador: %s\n", nome);
	printf("Valor da hora de trabalho: R$ %.2f\n", valorHora);
	printf("N�mero de horas trabalhadas: %.2f\n", numeroHoraTrabalhadas);
	printf("%% do desconto do INSS: %.2f\n", descontoInss);
	printf("-----------------------------------------\n");
	printf("Sal�rio L�quido: R$ %.2f", 

			(valorHora * numeroHoraTrabalhadas) * (100 - descontoInss)	/ 100);
	

	return 0;
system("pause");

}
