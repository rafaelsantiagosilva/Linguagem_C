#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float cf,i,pd,pc;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Insira o custo de fabricação:R$ ");
    scanf ("%f",&cf);
 i=cf*42/100;
 pd=cf*15/100;
 pc=cf+pd+i;
 printf ("\nO preço do consumidor é:R$%.2f",pc);
 
    getch();
    return(1);

}
