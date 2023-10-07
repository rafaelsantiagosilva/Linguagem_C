#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int x,y,z=0;
int main (){
setlocale (LC_ALL,"Portuguese");	
	for (x=1; x<=10; x=x+1){
	 	y=x*x;
	    z=z+y;
    }
	    
	printf("A soma é %i",z);
    getch();
    return(1);

}
