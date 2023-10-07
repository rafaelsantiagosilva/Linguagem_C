// Rafael Santiago da Silva 1D - Exercício 02

#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int elementos=15, i=0;
	float maiorB=0, vetA[elementos], vetB[elementos];
	printf("Digite os %d elementos do vetor A:\n", elementos);
	for(i=0; i<elementos; i++){
		printf("%dº elemento: ", i+1);
		scanf("%f", &vetA[i]);
		vetB[i] = vetA[i]/2;
		if(vetB[i] > maiorB){
			maiorB = vetB[i];
		}
	}
	printf("O maior valor do vetor B é %.2f", maiorB);	
	getch();
	return 0;
}
