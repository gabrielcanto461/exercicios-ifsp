//Fazer um quadrado de acordo com o caracter e o lado digitado pelo usuario

#include <stdio.h>

void repeat(char c, int count) {

	for (int i = 0; i < count; i++) {
		printf("%c", c);

	}

}
int main() {

	setbuf(stdout, NULL);

	char *caracter, space = ' ';
	int lado, contador, espaco;

	printf("Digite o caracter: ");
	scanf("%c", &caracter);

	printf("Digite o lado do quadrado: ");
	scanf("%d", &lado);

	espaco = lado - 2;

	for (contador = 1; contador <= lado; contador++) {
		if (contador == 1 || contador == lado) {
			repeat(caracter, lado);
		} else {
			printf("%c", caracter);
			repeat(space, espaco);
			printf("%c", caracter);

		}

		printf("\n");

	}
	system("pause");
	return 0;
}
//}
