#include <stdio.h>

int main(){
	int cd_inicial, n1, n2, n3, soma;

	printf("Executar programa - 1\nSair - 2\nDigite: ");
	scanf("%d", &cd_inicial);

	while(cd_inicial == 1){
		printf("\n\nDigite o primeiro numero: ");
		scanf("%d", &n1);

		printf("Digite o segundo numero: ");
		scanf("%d", &n2);

		printf("Digite o terceiro numero: ");
		scanf("%d", &n3);

		soma = n1+n2+n3;

		printf("A soma dos numeros e: %d\n\n\n", soma);

		printf("Executar novamente - 1\nSair - 2\nDigite: ");
		scanf("%d", &cd_inicial);
	}

	return 0;
}
