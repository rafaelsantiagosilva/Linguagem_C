#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float b,h,perimetro,area;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Coloque o valor da base do retângulo: ");
    scanf ("%f",&b);
    printf("Coloque o valor da altura do retângulo: ");
    scanf ("%f",&h);
    
    area=b*h;
    perimetro=2*b+2*h;
    printf ("\nO perímetro do retângulo é:%.2f",perimetro);
    printf ("\nA área do retângulo é:%.2f",area);
    getch();
    return(1);
}
