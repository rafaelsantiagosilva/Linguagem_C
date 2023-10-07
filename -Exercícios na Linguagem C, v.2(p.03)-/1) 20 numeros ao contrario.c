#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[20];
	printf("Digite 20 números:\n");
	
	int i;
	for(i = 0; i < 20; i++){
		scanf("%i", &numeros[i]);
	}
	printf("\nEles de trás para frente ficam nesta ordem:\n");
	
	for(i = 19; i >= 0; i--){
		printf("%i ", numeros[i]);
	}
	
	
	getch();
	return(1);
}

