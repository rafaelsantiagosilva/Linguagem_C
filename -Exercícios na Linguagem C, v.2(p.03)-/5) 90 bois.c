#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int bois = 90, i = 0;
	float numId[bois], peso[bois];
	
	// Lendo o peso e IDs dos bois
	printf("-------------------------Insira o número de identificação e peso(em quilos) dos %d bois:---------------------------------\n", bois);
	for(i=0; i<bois; i++){
	 printf("\nNumero de Identificação do %dº boi: ", i+1);
     scanf("%f", &numId[i]);
     printf("Peso do %dº boi: ", i+1);
     scanf("%f", &peso[i]);
	}
	float pesoGordo = peso[0], pesoMagro = peso[0], numGordo = numId[0], numMagro = numId[0];
	
	// Vendo os pesos e IDs do mais gordo e do mais magro
	for(i=0; i<bois; i++){
       if(pesoGordo < peso[i]){
         pesoGordo = peso[i];
       	 numGordo = numId[i];
	   }
	   if(pesoMagro > peso[i]){
	   	 pesoMagro = peso[i];
	   	 numMagro = numId[i];
	   }
	}
	printf("\nBoi mais pesado:\nID: %.0f\nPeso: %.3f\n", numGordo, pesoGordo);
	printf("\nBoi mais leve:\nID: %.0f\nPeso: %.3f", numMagro, pesoMagro);
	
	getch();
	return 0;
}
