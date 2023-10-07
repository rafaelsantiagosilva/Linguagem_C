#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float lado,area,perimetro;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Coloque o valor do lado do quadrado:");
    scanf ("%f",&lado);
    
    area=lado*lado;
    perimetro=lado*4;
    printf ("\nO perímetro do quadrado e:%.2f",perimetro);
    printf ("\nA área do quadrado e:%.2f",area);
    getch();
    return(1);
}
