#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    int x,y;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o valor do número: ");
    scanf ("%i",&x);
    
    y=x%2;
    
    if (y==0){
     printf ("O número é par");	
	}else{
	 printf ("O número é ímpar");
    }
	getch();
	return(1);
	}
