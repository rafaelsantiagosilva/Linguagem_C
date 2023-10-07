#include<stdio.h>
#include<conio.h>
#include<math.h>

float x=13, z=0, y=0;

int main (){
	setlocale(LC_ALL, "Portuguese");
	while (x<=73){
		z=z+x;
		x++;
		
	}
		z = z/60;
	
	printf("A média é %.4f...",y);
	getch ();
	return (1);
}

