#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float p1,p2,media;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o valor da prova 1: ");
    scanf ("%f",&p1);
    printf("Entre com o valor da prova 2: ");
    scanf ("%f",&p2);
    
    media=(p1+p2)/2;
    printf ("\nO valor da media é:%.1f",media);
    getch();
    return(1);

}
