//Aula sobre vari�veis

#include <stdio.h>

int main(){// chave delimita um bloco de codigo (inicio do codigo)

	//Declarar uma variavel
	int idade; //inteiro

	//declarar e inicializar uma vari�vel
	//int idade = 0;

	//fun��o para escrever algo na sa�da padrao (console)
	printf("Qual a sua idade?"); //terminando um comando

	//receber os dados
	scanf("%d", &idade); //recebe uma leitura (%d sig inteiro)

	printf("A sua idade � %d", idade);
	return 0;

} // (fim do bloco)
