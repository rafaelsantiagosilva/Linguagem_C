#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numeros[20], numerosIguais30 = 0;
	int i=0;
//	Ler 20 numeros
	printf("Digite 20 n�meros:\n");
	for(i=0; i<20; i++){
		scanf("%f", &numeros[i]);
	}
	for(i=0; i<20; i++){
		if(numeros[i] == 30){
			printf("\nH� um n�mero igual a 30 na posi��o %i!!!", i+1);	
		}
	}
	getch();
	return(1);
}
