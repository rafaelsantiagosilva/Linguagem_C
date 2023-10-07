#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float numeros[10], soma;
	printf("Digite 10 números:\n");	
	for(i = 0; i < 10; i++){
		scanf("%f", &numeros[i]);
		soma += numeros[i];
	}
	printf("O resultado da soma entre eles é %.2f", soma);
	getch();
	return 0;
}
