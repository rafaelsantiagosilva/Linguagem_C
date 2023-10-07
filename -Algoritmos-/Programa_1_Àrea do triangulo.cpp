#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
    float b,h,area,perimetro;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Coloque o valor da base do triângulo: ");
    scanf ("%f",&b);
    printf("Coloque o valor da altura do triângulo: ");
    scanf ("%f",&h);
    
    area=b*h/2;
    
    printf ("\nA área do triângulo é:%.2f",area);
    getch();
    return(1);

}
