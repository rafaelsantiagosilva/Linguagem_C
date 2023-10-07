#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    int d;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o número: ");
    scanf ("%f",&d);
    
     if (d==1){
     printf ("O dia da semana correspondente a este número é DOMINGO");	
	}
	 if (d==2){
     printf ("O dia da semana correspondente a este número é SEGUNDA");	
	}
	 if (d==3){
     printf ("O dia da semana correspondente a este número é TERÇA");	
	}
	 if (d==4){
     printf ("O dia da semana correspondente a este número é QUARTA");	
	}
	 if (d==5){
     printf ("O dia da semana correspondente a este número é QUINTA");	
	}
	 if (d==6){
     printf ("O dia da semana correspondente a este número é SEXTA");	
	}
	 if (d==7){
     printf ("O dia da semana correspondente a este número é SÁBADO");	
	}
     if (d<1 || d>7){
     	printf ("\n-----ERRO:VALOR INVALIDO-----");
	 }	
	
	getch();
    return(1);

}
