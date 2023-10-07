#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

int lin=3, col=3, i=0, j=0;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float lerMatrizes(float matriz1[lin][col], float matriz2[lin][col]);
	float somarMatrizes(float matriz1[lin][col], float matriz2[lin][col]);
	float matrizA[lin][col], matrizB[lin][col];
	lerMatrizes(matrizA, matrizB);
	somarMatrizes(matrizA, matrizB);
	getch();
	return 0;
}

float lerMatrizes(float matriz1[lin][col], float matriz2[lin][col]){
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("\nDigite o termo da %dºlinha e %dºcoluna da 1ºMatriz: ", i+1, j+1);
			scanf("%f", &matriz1[i][j]);
			printf("\nDigite o termo da %dºlinha e %dºcoluna da 2ºMatriz: ", i+1, j+1);
			scanf("%f", &matriz2[i][j]);
		}
	}
}

float somarMatrizes(float matriz1[lin][col], float matriz2[lin][col]){
	float somaAB[lin][col];
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
		  somaAB[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	printf("\nA soma das matrizes é igual a: \n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("%.2f ", somaAB[i][j]);
		}
		printf("\n");
	}
}
