#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float n1,n2,n3,p1,p2,p3,map;
int main (){
   setlocale(LC_ALL,"Portuguese");
    // entrada de dados;
	printf("Insira a nota 1: ");
    scanf ("%f",&n1);
    printf("Insira o peso da nota 1: ");
    scanf ("%f",&p1);
    printf("Insira a nota 2: ");
    scanf ("%f",&n2);
    printf("Insira o peso da nota 2: ");
    scanf ("%f",&p2);
    printf("Insira a nota 3: ");
    scanf ("%f",&n3);
    printf("Insira o peso da nota 3: ");
    scanf ("%f",&p3);
    //processamento;
    map=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    //saida;
    printf ("\nO valor da média aritmética ponderada é:%.1f",map);
    getch();
    return(1);

}
