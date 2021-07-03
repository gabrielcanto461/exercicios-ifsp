//Atividade Prática Individual 2
/*8. Determine se um ano lido do usuário é bissexto. Sendo que um ano é bissexto em duas
 condições: (1) se for divisível por 400 ou (2) se for divisível por 4 e não for divisível por
 100.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int ano;

	printf("Digite um ano para saber se é bissexto ou não: ");
	scanf("%d", &ano);

	if (ano % 400 == 0) {
		printf("O ano %d é bissexto.", ano);

	} else {
		if (ano % 4 == 0 && ano % 100 != 0) {
			printf("O ano %d é bissexto.", ano);
		} else {
			printf("O ano %d não é bissexto.", ano);
		}
	}
	return 0;

}
