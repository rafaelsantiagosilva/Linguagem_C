#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
    float r,h,volume;
int main (){
    setlocale(LC_ALL,"Portuguese");
	printf("Entre com a altura da lata de óleo: ");
    scanf ("%f",&h);
    printf("Entre com o raio da lata de óleo: ");
    scanf ("%f",&r);
    
    volume=3.14*r*r*h;
    
    printf ("O volume da lata de óleo é:%.2f",volume);
    getch();
    return(1);
}
