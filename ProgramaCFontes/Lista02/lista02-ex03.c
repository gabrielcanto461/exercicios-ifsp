//Ler um numero real e se >0 calcular raiz se menor dizer q � invalido

#include <stdio.h>
#include<math.h>

int main() {

	setbuf(stdout, NULL);

	float num;

	printf("Digite um n�mero: ");
	scanf("%f", &num);

	if (num >= 0){
		printf("A ra�z quadrada de %.2f � %.2f", num, sqrt(num));

	}else{
		printf("Este n�mero � inv�lido!");
	}
	return 0;

}
