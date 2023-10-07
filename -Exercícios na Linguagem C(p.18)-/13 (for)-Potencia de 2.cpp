#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
float x,y=0,z=0,s;
int main (){
setlocale (LC_ALL,"Portuguese");
	for (x=1; x<=50; x=x+1){
		y=pow(2,x);
	 	z=z+y;
	 
    }
      printf("A soma é:%.0f",z);
      
    getch();
    return(1);

}
