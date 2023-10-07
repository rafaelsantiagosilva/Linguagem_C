#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int linhas = 2, colunas=3, i=0, j=0;
	int matriz[2][3];
	printf("Digite os valores de uma matriz %d x %d:\n", linhas, colunas);
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("\nDigite o número da %dºlinha e %dºcoluna:", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	int matrizTrans[colunas][linhas];
	printf("\nA matriz transposta fica desta forma:\n");
	for(i=0; i<colunas; i++){
		for(j=0; j<linhas; j++){
			matrizTrans[i][j] = matriz[j][i];
			printf("%i", matrizTrans[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
