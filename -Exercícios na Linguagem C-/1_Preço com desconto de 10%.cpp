#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

  float preco,pdesconto;
 int main ()  {
 	setlocale(LC_ALL,"Portuguese");
 	
 	printf("Entre com o valor do produto:R$");
 	scanf("%f",&preco);
 	
 	pdesconto=preco-(preco*0.10);
 	
 	printf("\nO valor desse produto com 10%% de desconto é:R$%.2f",pdesconto);
 	getch ();
 	return (1);
 	 
 }
 
