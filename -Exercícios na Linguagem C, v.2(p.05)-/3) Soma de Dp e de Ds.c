#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int ordem=4, i=0, j=0, somaDP=0, somaDS=0;
	int matriz[ordem][ordem];
	for(i=0; i<ordem; i++){
		for(j=0; j<ordem; j++){
			printf("Insira o número da %dºlinha e %dºcoluna: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
//			Soma da DP
			if(i==j){
				somaDP += matriz[i][j];
			}
//			Soma da DS
			if((i+1)+(j+1)==ordem+1){
				somaDS += matriz[i][j];
			}
		}
	}
	if(somaDP == somaDS){
		printf("\nA soma da diagonal principal É igual a soma da diagonal secundária.");
	}else{
		printf("\nA soma da diagonal principal NÃO É igual a soma da diagonal secundária.");
	}
	getch();
	return 0;
}
