#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	float x=1, y=1, soma;
	setlocale(LC_ALL, "Portuguese");
	
	while(x<=99){
		soma += x/y;
		x += 2;
		y++; 
	}
	
	printf("O resultado é: %.2f", soma);
	getch();
	return 0;
}
