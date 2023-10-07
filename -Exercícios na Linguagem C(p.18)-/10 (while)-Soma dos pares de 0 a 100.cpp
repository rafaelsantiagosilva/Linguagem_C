#include<stdio.h>
#include<conio.h>
#include<math.h>
int x, z=0;

int main (){
	
	while (x<=100){
		z=z+x;
		x=x+2;	
	}
	
	printf(" %i",z);
	getch ();
	return (1);
}
