#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float x,y;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o primeiro n�mero: ");
    scanf ("%f",&x);
    printf("Entre com o segundo n�mero: ");
    scanf ("%f",&y);
    
    if (x>y){
     printf ("%.2f � maior",x);	
	}
	if (x<y){
	 printf ("%.2f � maior",y);
	}
	
    
    getch();
    return(1);

}
