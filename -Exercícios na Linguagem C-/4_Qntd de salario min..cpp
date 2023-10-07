#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
 
  float salariomin,salariofuncio,salariominfuncio;
int main (){
	setlocale(LC_ALL,"Portuguese");

  printf ("DIgite o valor do salário minímo:R$");
  scanf ("%f",&salariomin);
  printf ("\nDigite o valor de seu salário:R$");
  scanf ("%f",&salariofuncio);
  
  salariomin=1302;
  
  salariominfuncio=salariofuncio/salariomin;
  
  printf ("\nVocê recebe %.2f salarios minímos",salariominfuncio);
  
  getch();
  return(1);
}

