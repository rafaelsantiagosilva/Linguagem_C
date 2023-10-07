#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float resultado = 0, impar=1, par=2;
	
	while(par <= 10){
		resultado += (1/impar)+(-1/par);
		impar += 2;
		par += 2;
	}
	
	printf("\nO resultado é: %f", resultado);
	
	
	getch();
	return 0;
}
