#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float n1,n2,mg;
int main (){
   setlocale(LC_ALL,"Portuguese");
    // entrada de dados;
	printf("Entre com o valor da nota 1: ");
    scanf ("%f",&n1);
    printf("Entre com o valor da nota 2: ");
    scanf ("%f",&n2);
    // calculo da media(processamento);
    mg=sqrt(n1*n2);
    //saida;
    printf ("\nA média geométrica das notas é:%.1f",mg);
    getch();
    return(1);

}
