#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    int x,y;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o valor do n�mero: ");
    scanf ("%i",&x);
    
    y=x%2;
    
    if (y==0){
     printf ("O n�mero � par");	
	}else{
	 printf ("O n�mero � �mpar");
    }
	getch();
	return(1);
	}
