#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
 
  float pesodigitado,peso15,peso20;
int main (){
	setlocale(LC_ALL,"Portuguese");

  printf ("Coloque o valor de seu peso:");
  scanf ("%f",&pesodigitado);
  

  peso15=pesodigitado*0.15+pesodigitado;  
  peso20=pesodigitado-pesodigitado*0.20;
  
  printf ("\nSe voc� engordar 15%% de seu peso atual,voc� ter� %.1f quilos",peso15);
  printf ("\nSe voc� emagrecer 20%% do seu peso atual,voc� ter� %.1f quilos",peso20);
  
  getch();
  return(1);
}

