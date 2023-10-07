#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int qntdNum = 0, i = 0;

	
	printf("Quantos números você deseja armazenar? ");
	scanf("%d", &qntdNum);
	
	float numeros[qntdNum], diferencas[qntdNum/2],  maiorDiferenca = 0;
	printf("\nDigite os %d números: \n", qntdNum);
	for(i=0; i<qntdNum; i++){
		scanf("%f", &numeros[i]);
	}
	for(i=0; i<qntdNum-1; i++){
//		Recebendo todas as diferenças
		diferencas[i] = numeros[i] - numeros[i+1];
		if(maiorDiferenca < diferencas[i]){
			maiorDiferenca = diferencas[i];
		}
	}
	printf("\nA maior diferença é de %.2f.", maiorDiferenca);
	
	getch();
	return 0;
}
