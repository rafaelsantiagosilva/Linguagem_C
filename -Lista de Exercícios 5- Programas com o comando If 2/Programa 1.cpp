#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    int d;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o n�mero: ");
    scanf ("%f",&d);
    
     if (d==1){
     printf ("O dia da semana correspondente a este n�mero � DOMINGO");	
	}
	 if (d==2){
     printf ("O dia da semana correspondente a este n�mero � SEGUNDA");	
	}
	 if (d==3){
     printf ("O dia da semana correspondente a este n�mero � TER�A");	
	}
	 if (d==4){
     printf ("O dia da semana correspondente a este n�mero � QUARTA");	
	}
	 if (d==5){
     printf ("O dia da semana correspondente a este n�mero � QUINTA");	
	}
	 if (d==6){
     printf ("O dia da semana correspondente a este n�mero � SEXTA");	
	}
	 if (d==7){
     printf ("O dia da semana correspondente a este n�mero � S�BADO");	
	}
     if (d<1 || d>7){
     	printf ("\n-----ERRO:VALOR INVALIDO-----");
	 }	
	
	getch();
    return(1);

}
