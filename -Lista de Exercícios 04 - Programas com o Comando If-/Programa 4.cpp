#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float preco,origem;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o pre�o do produto:R$");
    scanf ("%f",&preco);
    printf("Entre com o c�digo de origem do produto:");
    scanf ("%f",&origem);
                                                                                                                                                      
    
    if (origem==1){ 
     printf ("Este produto � de proced�ncia SUL ");	
	}
	if (origem==2){
	 printf ("Este produto � de proced�ncia NORTE");
	}
	if (origem==3){
     printf ("Este produto � de proced�ncia LESTE"); 	
	}
	if (origem==4){
	 printf ("Este produto � de proced�ncia OESTE");
	}
	if (origem==5 || origem==6){
     printf ("Este produto � de proced�ncia NORDESTE");
	}
	if (origem==7 || origem==8 || origem==9){
     printf ("Este produto � de proced�ncia SUDESTE");
	}
	if (origem>=10 && origem<=20){
	 printf ("Este produto � de proced�ncia CENTRO-OESTE");
	}
	if (origem>=21 && origem<=30){
     printf ("Este produto � de proced�ncia NOROESTE");
	}
	if (origem<1 || origem>30){
	 printf ("Este produto � IMPORTADO");	
	}
    
    getch();
    return(1);

}
