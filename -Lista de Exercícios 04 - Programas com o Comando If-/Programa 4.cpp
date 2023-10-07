#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float preco,origem;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o preço do produto:R$");
    scanf ("%f",&preco);
    printf("Entre com o código de origem do produto:");
    scanf ("%f",&origem);
                                                                                                                                                      
    
    if (origem==1){ 
     printf ("Este produto é de procedência SUL ");	
	}
	if (origem==2){
	 printf ("Este produto é de procedência NORTE");
	}
	if (origem==3){
     printf ("Este produto é de procedência LESTE"); 	
	}
	if (origem==4){
	 printf ("Este produto é de procedência OESTE");
	}
	if (origem==5 || origem==6){
     printf ("Este produto é de procedência NORDESTE");
	}
	if (origem==7 || origem==8 || origem==9){
     printf ("Este produto é de procedência SUDESTE");
	}
	if (origem>=10 && origem<=20){
	 printf ("Este produto é de procedência CENTRO-OESTE");
	}
	if (origem>=21 && origem<=30){
     printf ("Este produto é de procedência NOROESTE");
	}
	if (origem<1 || origem>30){
	 printf ("Este produto é IMPORTADO");	
	}
    
    getch();
    return(1);

}
