//Aula sobre variáveis

#include <stdio.h>

int main(){// chave delimita um bloco de codigo (inicio do codigo)

	//Declarar uma variavel
	int idade; //inteiro

	//declarar e inicializar uma variável
	//int idade = 0;

	//função para escrever algo na saída padrao (console)
	printf("Qual a sua idade?"); //terminando um comando

	//receber os dados
	scanf("%d", &idade); //recebe uma leitura (%d sig inteiro)

	printf("A sua idade é %d", idade);
	return 0;

} // (fim do bloco)
