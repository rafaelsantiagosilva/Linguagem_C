#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float a,b,c,delta,x1,x2;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o valor de a:");
    scanf ("%f",&a);
    printf("Entre com o valor de b:");
    scanf ("%f",&b);
    printf("Entre com o valor de c:");
    scanf ("%f",&c);
    
    delta=b*b-(4*a*c);
    
    if (delta==0){
     x1=-b/(2*a);
     printf ("O valor de x é %.2f",x1);	
	}if (delta>0){
	 x1=(-b+sqrt(delta))/(2*a);
	 x2=(-b-sqrt(delta))/(2*a);
	 printf ("O valor de x pode ser:");
	 printf ("\nX1=%.2f",x1);
	 printf ("\nX2=%.2f",x2);
	}if (delta<0){
	 printf ("Impossível calcular pois delta é negativo");	
	}
    
    getch();
    return(1);

}
