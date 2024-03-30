#include <stdio.h>
#include <math.h>

int main(){
	int cd_inicial, n1, quadrado;

	printf("Executar programa - 1\nSair - 2\nDigite: ");
	scanf("%d", &cd_inicial);

	while(cd_inicial == 1){
		printf("\n\nDigite um numero: ");
		scanf("%d", &n1);

		quadrado = n1*n1;

		printf("O quadrado do numero digitado e: %d\n\n", quadrado);

		printf("Executar novamente - 1\nSair - 2\nDigite: ");
		scanf("%d", &cd_inicial);
	}

	return 0;
}
