/*Implemente um programa que desenhe os losangos abaixo na tela, sendo que o
 topo do primeiro losango é colocado em uma linha e uma coluna lidas do teclado, e o topo do
 segundo fica 15 colunas à direita do primeiro*/

#include <stdio.h>

void pulaLinha(int linha) {

	for (int i = 0; i < linha; i++) {

		printf("%d\n", i + 1);
	}

}

void repeat(char *c, int count) {

	for (int i = 0; i < count; i++) {
		printf("%c", *c);

	}
}

int main() {

	setbuf(stdout, NULL);

	int linha, coluna, aux, espacos;

	printf("Digite a linha que deseja o topo do primeiro losango: ");
	scanf("%d", &linha);
	printf("Digite a coluna que deseja o topo do primeiro losango: ");
	scanf("%d", &coluna);

	//pulador de linha
	pulaLinha(linha - 1);

	repeat(" ", coluna - 1);
	aux = 1;
	espacos = 14;
	//parte de cima
	//printf("X");

	//printf("X");
	for (int i = 0; i < 5; i++) {

		repeat(" ", coluna - 1);
		repeat("X", i+aux);

		repeat(" ", espacos);
		repeat("X", i);
		printf("\n");
		coluna--;
		aux++;
		espacos = espacos - 2;
	}


return 0;

}
