//Atividade Prática Individual 2
/*Faça um programa que calcule a média ponderada das notas de 3 provas. A primeira
e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do
aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser
igual ou superior a 60 pontos.*/

#include <stdio.h>

int main() {

	setbuf(stdout,NULL);

	float nota1, nota2, nota3, mediaPonderada;

	printf("Digite a nota 1: ");
	scanf("%f", &nota1);


	printf("Digite a nota 2: ");
	scanf("%f", &nota2);


	printf("Digite a nota 3: ");
	scanf("%f", &nota3);

	mediaPonderada = (nota1 * 1 + nota2 * 1 + nota3 * 2) / 4;
	if (mediaPonderada < 60) {
		printf("Reprovado!");

	}else{
		printf("Aprovado com nota %.2f!", mediaPonderada);
	}
	return 0;
}
