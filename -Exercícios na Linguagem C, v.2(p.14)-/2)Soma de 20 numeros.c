#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int elementos=20, i=0;
	int vetor[elementos], verificarVetor(int vetor[], int tamanho);
	printf("Digite %d elementos de um vetor: ", elementos);
	for(i=0; i<elementos; i++){
		scanf("%d", &vetor[i]);
	}
	verificarVetor(vetor, elementos);
	getch();
	return 0;
}

int verificarVetor(int vetor[], int tamanho){
	int i=0, soma=0, numPositivos=0;
	for(i=0; i<tamanho; i++){
		soma+=vetor[i];
		if(vetor[i] > 0){
			numPositivos++;
		}
	}
	printf("Há %d números positivos e a soma de seus elementos é igual a %d.", numPositivos, soma);
	return(soma);
}
