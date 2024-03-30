//Aula sobre variáveis
#include <stdio.h>

int main(){ //a chave delimita um bloco de código (Início do bloco)
	//Declarando variáveis
	int idade; //inteiro

	//declarando e inicializando variáveis
	//int idade = 0;

	//Função para escrever algo na saída padrão (console)
	printf("Qual e a sua idade? ");//o ponto e virgula finaliza um comando

	//Receber dados
	scanf("%d", &idade);

	//Saída
	printf("A sua idade e %d", idade);

	return 0;
}//fim do bloco
