#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int qntdNum = 0, i = 0;

	
	printf("Quantos n�meros voc� deseja armazenar? ");
	scanf("%d", &qntdNum);
	
	float numeros[qntdNum], diferencas[qntdNum/2],  maiorDiferenca = 0;
	printf("\nDigite os %d n�meros: \n", qntdNum);
	for(i=0; i<qntdNum; i++){
		scanf("%f", &numeros[i]);
	}
	for(i=0; i<qntdNum-1; i++){
//		Recebendo todas as diferen�as
		diferencas[i] = numeros[i] - numeros[i+1];
		if(maiorDiferenca < diferencas[i]){
			maiorDiferenca = diferencas[i];
		}
	}
	printf("\nA maior diferen�a � de %.2f.", maiorDiferenca);
	
	getch();
	return 0;
}
