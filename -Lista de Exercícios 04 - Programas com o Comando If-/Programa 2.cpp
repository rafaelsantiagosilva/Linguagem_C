#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float si,sf;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Insira o valor de seu sal�rio:R$");
    scanf ("%f",&si);
   
    if (si<=1200){
    	sf=si+(0.35*si);
     printf ("Seu sal�rio novo ser�:R$%.2f",sf);	
    }
    if (si>1200){
    	sf=si+(0.15*si);
     printf ("Seu sal�rio novo ser�:R$%.2f",sf);	
	}
    getch();
    return(1);

}
