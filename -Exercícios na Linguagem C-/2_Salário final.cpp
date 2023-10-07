#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
 
  float salariofixo,vendas,comissao,salariofinal;
int main (){
	setlocale(LC_ALL,"Portuguese");

  printf ("Digite o valor de seu salário:R$");
  scanf ("%f",&salariofixo);
  printf ("Digite o valor arrecado através das vendas:R$");
  scanf ("%f",&vendas);

  comissao=0.04*vendas;  
  salariofinal=comissao+salariofixo;
  
  printf ("\nO valor da comissão arrecadada com as vendas é de:R$%.2f",comissao);
  printf ("\nSeu salário final é de R$%.2f",salariofinal);
  
  getch();
  return(1);
}

