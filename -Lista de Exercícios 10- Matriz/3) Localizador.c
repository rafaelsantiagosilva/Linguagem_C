// Rafael Santiago da Silva 1D --- 3) Localizar numero

#include<stdio.h>
#include<locale.h>

int main(void){
	int ordem=5, i=0, j=0;
	int localizacao[2] = {-1, -1}, valor=0;
	int matriz[ordem][ordem];
	setlocale(LC_ALL, "Portuguese");
	printf("----------------------Exerc�cio 03----------------------\n\n");
	printf("Digite os %d valores da matriz inteira: \n\n", ordem*ordem);
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("\n%i�linha e %i�coluna: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\nDigite um valor inteiro: ");
	scanf("%d", &valor);
	printf("\n");
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			if(matriz[i][j]==valor){
				localizacao[0] = i+1;
				localizacao[1] = j+1;
				printf("\nO n�mero %d est� na %d�linha e %d�coluna", valor, localizacao[0], localizacao[1]);
			}
		}
	}
	if(localizacao[0] == -1 && localizacao[1] == -1){
	    printf("Valor n�o encontrado D:");
	}
	return 0;
}
