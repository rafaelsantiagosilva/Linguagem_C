#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float b,h,perimetro,area;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Coloque o valor da base do ret�ngulo: ");
    scanf ("%f",&b);
    printf("Coloque o valor da altura do ret�ngulo: ");
    scanf ("%f",&h);
    
    area=b*h;
    perimetro=2*b+2*h;
    printf ("\nO per�metro do ret�ngulo �:%.2f",perimetro);
    printf ("\nA �rea do ret�ngulo �:%.2f",area);
    getch();
    return(1);
}
