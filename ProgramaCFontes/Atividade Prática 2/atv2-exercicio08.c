//Atividade Pr�tica Individual 2
/*8. Determine se um ano lido do usu�rio � bissexto. Sendo que um ano � bissexto em duas
 condi��es: (1) se for divis�vel por 400 ou (2) se for divis�vel por 4 e n�o for divis�vel por
 100.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int ano;

	printf("Digite um ano para saber se � bissexto ou n�o: ");
	scanf("%d", &ano);

	if (ano % 400 == 0) {
		printf("O ano %d � bissexto.", ano);

	} else {
		if (ano % 4 == 0 && ano % 100 != 0) {
			printf("O ano %d � bissexto.", ano);
		} else {
			printf("O ano %d n�o � bissexto.", ano);
		}
	}
	return 0;

}
