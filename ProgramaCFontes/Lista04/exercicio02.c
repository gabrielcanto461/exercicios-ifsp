/*Faça um programa utilizando o comando FOR que mostre uma contagem regressiva na
 *tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
 */

#include <stdio.h>

int main() {

	printf("Contagem Regressiva\n");
	printf("===================\n");

	for(int n = 10; n>=0; n--){
		printf("%d\n", n);

	}
	printf("===================\n");
	printf("FIM!");

	return 0;

}
