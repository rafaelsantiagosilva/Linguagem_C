#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float x;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Escreva o n�mero:");
    scanf ("%f",&x);
   
    if (x<0){
     printf ("O n�mero � negativo");	
	}
	if(x>0){
	 printf ("O n�mero � positivo");
	}
    
    getch();
    return(1);
}
