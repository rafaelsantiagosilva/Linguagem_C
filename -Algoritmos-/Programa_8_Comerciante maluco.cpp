#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float prestacao,vfinal,prejuizo;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o valor da presta��o atrasada: ");
    scanf ("%f",&prestacao);
    
    vfinal=10/100.0*prestacao+prestacao;
    prejuizo=prestacao-(vfinal-10/100.0*vfinal);
    printf ("\nO valor final a pagar �:R$%.2f",vfinal);
    printf ("\nE o preju�zo do comerciante �:-R$%.2f",prejuizo);
    
    getch();
    return(1);

}
