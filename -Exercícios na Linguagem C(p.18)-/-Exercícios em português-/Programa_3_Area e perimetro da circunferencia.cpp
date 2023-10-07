#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
    float r,area,perimetro;
int main (){
    setlocale(LC_ALL,"Portuguese");
	printf("Coloque o valor do raio da circunferência: ");
    scanf ("%f",&r);
    
    area=3.14*r*r;
    perimetro=2*3.14*r;
    printf ("O perímetro da circunferência é:%.2f",perimetro);
    printf ("\nE a área da circunferência é:%.2f",area);
   
    getch();
    return(1);
}
