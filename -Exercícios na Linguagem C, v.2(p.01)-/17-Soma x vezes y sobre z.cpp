#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	float x=37, y=38, z=1, soma;
	setlocale(LC_ALL, "Portuguese");
	
	while(z <= 37){
		soma += (x * y) / z;
		x--;
		y--;
		z++;
	}
	
	printf("O resultado é: %.2f", soma);
	getch();
	return 0;
}
