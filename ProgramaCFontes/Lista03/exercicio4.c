/*Faça um programa que calcular o salário líquido de um trabalhador. Serão fornecidos o
 nome do trabalhador, o valor da hora, número de horas trabalhadas e o % de desconto do
 INSS. No final, imprima todos os dados lidos e o salário líquido calculado: (valor da hora
 * número de horas trabalhadas ) * (100 - % de desconto do INSS)/100*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	char nome[10];
	float valorHora, numeroHoraTrabalhadas, descontoInss;

	printf("Digite o nome do trabalhador: ");
	gets(nome);

	printf("Digite o valor da hora de trabalho: ");
	scanf("%f", &valorHora);

	printf("Digite o número de horas trabalhadas: ");
	scanf("%f", &numeroHoraTrabalhadas);

	printf("Digite a %% do desconto do INSS: ");
	scanf("%f", &descontoInss);

	printf("-----------------------------------------\n");
	printf("Nome do trabalhador: %s\n", nome);
	printf("Valor da hora de trabalho: R$ %.2f\n", valorHora);
	printf("Número de horas trabalhadas: %.2f\n", numeroHoraTrabalhadas);
	printf("%% do desconto do INSS: %.2f\n", descontoInss);
	printf("-----------------------------------------\n");
	printf("Salário Líquido: R$ %.2f", 

			(valorHora * numeroHoraTrabalhadas) * (100 - descontoInss)	/ 100);
	

	return 0;
system("pause");

}
