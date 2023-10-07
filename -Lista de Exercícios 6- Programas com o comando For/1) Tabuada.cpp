#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int x,y,z;
int main (){
setlocale (LC_ALL,"Portuguese");
    printf("Digite um número para calcular sua tabuada:");
	scanf("%i",&x);	
	for (y=1; y<=10; y=y+1){
	    z=x*y;
	    	printf("\n %d X %d = %d",x,y,z);
    }
	    

    getch();
    return(1);

}
