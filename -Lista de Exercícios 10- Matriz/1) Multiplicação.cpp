// Rafael Santiago da Silva 1D --- 1) Multiplicação
#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int ordem = 4, i=0, j=0, numero;
	int matriz[ordem][ordem];
	printf("----------------------Exercício 01----------------------\n\n");
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Digite o valor da %iºlinha da %iºcoluna: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\nOk. Agora digite um número inteiro para a matriz ser multiplicada por ele: ");
	scanf("%d", &numero);
	printf("A matriz multiplicada por %d fica: \n", numero);
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			matriz[i][j]*=numero;
			printf("%d  ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
