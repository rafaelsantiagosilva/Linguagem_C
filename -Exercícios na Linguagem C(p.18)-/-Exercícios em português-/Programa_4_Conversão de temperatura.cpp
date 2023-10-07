#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float F,c;
int main (){
    setlocale(LC_ALL,"Portuguese");
	printf("Entre com a temperatura em graus Fahrenheit:");
    scanf ("%f",&F);
    
    c=3/9.0*(F-32);
    printf ("A temperatura em graus celsius é:%.2f°C",c);
    getch();
    return(1);
}
