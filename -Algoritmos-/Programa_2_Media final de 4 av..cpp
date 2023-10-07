#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float p1,p2,p3,pf,mp,mf;
int main (){
   setlocale(LC_ALL,"Portuguese");
    // entrada de dados;
	printf("Insira nota da avaliação 1: ");
    scanf ("%f",&p1);
    printf("Insira nota da avaliação 2: ");
    scanf ("%f",&p2);
    printf("Insira nota da avaliação 3: ");
    scanf ("%f",&p3);
    printf("Insira nota da avaliação final: ");
    scanf ("%f",&pf); 
    // calculo da media(processamento);
    mp=(p1+p2+p3)/3;
    mf=(mp+2*pf)/3;
    //saida;
     printf ("\nA média final é:%.1f",mf);
    getch();
    return(1);

}
