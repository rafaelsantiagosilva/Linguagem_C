#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	float x=1, y=0;
	setlocale(LC_ALL, "Portuguese");
	while(x<=100){
		y += 1/x;
		x++;
	}
	
	printf("O resultado é: %.2f", y);
	getch();
	return 0;
}
