#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	float x=1, y=50, soma;
	setlocale(LC_ALL, "Portuguese");
	
	while(x<=50){
		soma = pow(2, x)/y;
		x++;
		y--;
	}
	
	printf("O resultado é: %.2f", soma);
	getch();
	return 0;
}
