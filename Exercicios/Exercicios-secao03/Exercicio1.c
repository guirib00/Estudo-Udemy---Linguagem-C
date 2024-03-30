#include <stdio.h>

int main(){
	int n1, cd_inicial;

	printf("Executar programa - 1\nSair - 2\nDigite: ");
	scanf("%d", &cd_inicial);

	while(cd_inicial == 1){

		printf("\n\nDigite um numero: ");
		scanf("%d", &n1);

		printf("O numero digitado foi %d\n\n", n1);

		printf("Executar novamente - 1\nSair - 2\nDigite: ");
		scanf("%d", &cd_inicial);
	}

	return 0;
}
