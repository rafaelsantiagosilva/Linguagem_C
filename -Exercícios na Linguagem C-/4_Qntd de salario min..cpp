#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
 
  float salariomin,salariofuncio,salariominfuncio;
int main (){
	setlocale(LC_ALL,"Portuguese");

  printf ("DIgite o valor do sal�rio min�mo:R$");
  scanf ("%f",&salariomin);
  printf ("\nDigite o valor de seu sal�rio:R$");
  scanf ("%f",&salariofuncio);
  
  salariomin=1302;
  
  salariominfuncio=salariofuncio/salariomin;
  
  printf ("\nVoc� recebe %.2f salarios min�mos",salariominfuncio);
  
  getch();
  return(1);
}

