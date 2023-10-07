#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float x;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Escreva o número:");
    scanf ("%f",&x);
   
    if (x<0){
     printf ("O número é negativo");	
	}
	if(x>0){
	 printf ("O número é positivo");
	}
    
    getch();
    return(1);
}
