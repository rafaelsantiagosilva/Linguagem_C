#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float a,b,c;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o primeiro n�mero: ");
    scanf ("%f",&a);
    printf("Entre com o segundo n�mero: ");
    scanf ("%f",&b);
    printf("Entre com o terceiro n�mero: ");
    scanf ("%f",&c);
    
    if (a>b && a>c){
     printf ("O primeiro valor, %.2f, � o maior",a);	
	}
	if (b>a && b>c){
	 printf ("O segundo valor, %.2f, � o maior",b);
	}
	 if (c>a && c>b){
     printf ("O terceiro valor, %.2f, � o maior",c);	
	}
	if (a==b && a>c){
	 printf ("O primeiro valor e segundo valor s�o iguais, %.2f, e maiores que o terceiro valor",a);
	}
	 if (a==c && a>b){
     printf ("O primeiro valor e terceiro valor s�o iguais, %.2f, e maiores que o segundo valor",a);	
	}
	if (b==c && b>a){
	 printf ("O segundo valor e terceiro valor s�o iguais, %.2f, e maiores que o primeiro valor",b);
	}
	 if (a==b && a==c){
     printf ("Os valores s�o todos iguais, sendo %.2f",a);	
	}

	
    getch();
    return(1);

}
