#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int x=1,y=0,z=0;
int main (){
setlocale (LC_ALL,"Portuguese");	
	while (x<=10){
	   y=x*x;
	   z=z+y;
	   x++;
    }
	    
	printf("A soma é %i",z);
    getch();
    return(1);

}
