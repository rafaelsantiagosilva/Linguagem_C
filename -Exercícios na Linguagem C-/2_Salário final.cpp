#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
 
  float salariofixo,vendas,comissao,salariofinal;
int main (){
	setlocale(LC_ALL,"Portuguese");

  printf ("Digite o valor de seu sal�rio:R$");
  scanf ("%f",&salariofixo);
  printf ("Digite o valor arrecado atrav�s das vendas:R$");
  scanf ("%f",&vendas);

  comissao=0.04*vendas;  
  salariofinal=comissao+salariofixo;
  
  printf ("\nO valor da comiss�o arrecadada com as vendas � de:R$%.2f",comissao);
  printf ("\nSeu sal�rio final � de R$%.2f",salariofinal);
  
  getch();
  return(1);
}

