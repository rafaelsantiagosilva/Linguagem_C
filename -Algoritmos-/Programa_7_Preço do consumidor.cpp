#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float cf,i,pd,pc;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Insira o custo de fabrica��o:R$ ");
    scanf ("%f",&cf);
 i=cf*42/100;
 pd=cf*15/100;
 pc=cf+pd+i;
 printf ("\nO pre�o do consumidor �:R$%.2f",pc);
 
    getch();
    return(1);

}
