#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
float x,y=0,z=0;
int main (){
setlocale (LC_ALL,"Portuguese");
	while (x<=50){
		y=pow(2,x);
	 	z=z+y;
	 	x++;
	 
    }
      printf("A soma é:%.0f",z);
      
    getch();
    return(1);

}
