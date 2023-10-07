#include<stdio.h>
#include<conio.h>
#include<math.h>

int x, z=0;

int main (){
	
	while (x<=99){
		z=z+x;
		x++;	
	}
	
	printf(" %i",z);
	getch ();
	return (1);
}

