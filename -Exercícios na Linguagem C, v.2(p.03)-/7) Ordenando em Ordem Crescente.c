#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
	system("color 0F");
	setlocale(LC_ALL, "Portuguese");

	int qntdNum=5, i = 0, j = 0, intermediaria;	
	int numeros[qntdNum];
	printf("Insira %d números inteiros:\n", qntdNum);
	
	for(i=0; i<qntdNum; i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("\nEm ordem crescente eles ficam:\n");
	for(i=0; i<qntdNum; i++){
		for(j=i; j<qntdNum; j++){
			if(numeros[i] > numeros[j]){
				intermediaria = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = intermediaria;
			}
		}
	}
	
	for(i=0; i<qntdNum; i++){
		printf("\n%dº: %d", i+1, numeros[i]);
	}
	getch();
	return 0;
}

