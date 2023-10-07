#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float a,b,c;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o primeiro número: ");
    scanf ("%f",&a);
    printf("Entre com o segundo número: ");
    scanf ("%f",&b);
    printf("Entre com o terceiro número: ");
    scanf ("%f",&c);
    
    if (a>b && a>c){
     printf ("O primeiro valor, %.2f, é o maior",a);	
	}
	if (b>a && b>c){
	 printf ("O segundo valor, %.2f, é o maior",b);
	}
	 if (c>a && c>b){
     printf ("O terceiro valor, %.2f, é o maior",c);	
	}
	if (a==b && a>c){
	 printf ("O primeiro valor e segundo valor são iguais, %.2f, e maiores que o terceiro valor",a);
	}
	 if (a==c && a>b){
     printf ("O primeiro valor e terceiro valor são iguais, %.2f, e maiores que o segundo valor",a);	
	}
	if (b==c && b>a){
	 printf ("O segundo valor e terceiro valor são iguais, %.2f, e maiores que o primeiro valor",b);
	}
	 if (a==b && a==c){
     printf ("Os valores são todos iguais, sendo %.2f",a);	
	}

	
    getch();
    return(1);

}
