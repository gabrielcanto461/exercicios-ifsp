//Receber a e b como catetos de um triangulo e calcule o valor da hipotenusa

#include <stdio.h>
#include <math.h>

int main() {

	setbuf(stdout, NULL);

	float a, b, hipotenusa;

	printf("Digite o valor do lado a: ");
	scanf("%f", &a);

	printf("Digite o valor do lado b: ");
	scanf("%f", &b);

	hipotenusa = sqrt(a*a + b*b);

	printf("A hipotenusa do triangulo com os lados %.2f e %.2f é: %.2f", a, b, hipotenusa);

	return 0;

}
