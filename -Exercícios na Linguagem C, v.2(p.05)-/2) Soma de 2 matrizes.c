#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int lin=0, col=0, i=0, j=0;
	printf("Digite a quantidade de linhas das matrizes: ");
	scanf("%d", &lin);
	printf("Digite a quantidade de colunas das matrizes: ");
	scanf("%d", &col);
	float matriz1[lin][col], matriz2[lin][col], soma[lin][col];
	printf("\nDigite os valores:\n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("Digite o número da %dºlinha e %dºcoluna da 1ºmatriz: ", i+1, j+1);
			scanf("%f", &matriz1[i][j]);
			printf("Digite o número da %dºlinha e %dºcoluna da 2ºmatriz: ", i+1, j+1);
			scanf("%f", &matriz2[i][j]);
			printf("\n");
		}
	}
	printf("A matriz 1 é:\n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
	        printf("%.2f ", matriz1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nA matriz 2 é:\n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
	        printf("%.2f ", matriz2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nA soma das matrizes é:\n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
	        soma[i][j] = matriz1[i][j] + matriz2[i][j];
			printf("%.2f ", soma[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
