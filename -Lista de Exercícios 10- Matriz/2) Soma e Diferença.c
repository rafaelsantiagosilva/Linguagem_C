// Rafael Santiago da Silva 1D --- 2) Soma e Diferença
#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	const linha = 3, coluna = 4;
	int i=0, j=0;
	int matrizA[linha][coluna], matrizB[linha][coluna], soma[linha][coluna], diferenca[linha][coluna];
	printf("----------------------Exercício 02----------------------\n\n");
//	Lendo Matriz A
	printf("Digite os valores da MATRIZ A: \n\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Digite o valor da %dºlinha e %dºcoluna: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}
	printf("\n----------------------Matriz A----------------------\n\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d  ", matrizA[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------------------------\n\n");
	
//	Lendo Matriz B
	printf("Digite os valores da MATRIZ B: \n\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Digite o valor da %dºlinha e %dºcoluna: ", i+1, j+1);
			scanf("%d", &matrizB[i][j]);
		}
	}
	printf("\n----------------------Matriz B----------------------\n\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d  ", matrizB[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------------------------\n\n");
	
//	Calculando Soma
	printf("Calculando Soma... \n\n");
	printf("\n----------------------Matriz Soma-------------------\n\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			soma[i][j] = matrizA[i][j] + matrizB[i][j];
			printf("%d  ", soma[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------------------------\n\n");
	
//	Calculando Diferença
	printf("Calculando Diferença... \n\n");
	printf("\n----------------------Matriz Diferença--------------\n\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			diferenca[i][j] = matrizA[i][j] - matrizB[i][j];
			printf("%d  ", diferenca[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------------------------\n\n");
	return 0;
}
