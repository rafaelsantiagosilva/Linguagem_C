// Rafael Santiago da Silva 1D - Exercício 01

#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int maior18, pessoas=10, i=0;
	int idade[pessoas];
	for(i=0; i<pessoas; i++){
		printf("Digite a idade da %dº pessoa: ", i+1);
		scanf("%d", &idade[i]);
		if(idade[i] >= 18){
			maior18++;
		}
	}
	printf("\nHá %d pessoas com 18 anos ou mais.", maior18); 
	getch();
	return 0;
}
