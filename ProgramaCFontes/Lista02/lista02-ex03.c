//Ler um numero real e se >0 calcular raiz se menor dizer q é invalido

#include <stdio.h>
#include<math.h>

int main() {

	setbuf(stdout, NULL);

	float num;

	printf("Digite um número: ");
	scanf("%f", &num);

	if (num >= 0){
		printf("A raíz quadrada de %.2f é %.2f", num, sqrt(num));

	}else{
		printf("Este número é inválido!");
	}
	return 0;

}
