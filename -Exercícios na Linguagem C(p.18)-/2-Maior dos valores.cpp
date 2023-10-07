#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float x,y;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o primeiro número: ");
    scanf ("%f",&x);
    printf("Entre com o segundo número: ");
    scanf ("%f",&y);
    
    if (x>y){
     printf ("%.2f é maior",x);	
	}
	if (x<y){
	 printf ("%.2f é maior",y);
	}
	
    
    getch();
    return(1);

}
