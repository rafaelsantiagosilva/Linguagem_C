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
    
     if (a<b && a<c && c>=b){
     printf ("A ordem crescente é:<-%.2f-%.2f-%.2f->",a,b,c);	
	}
	 if (a<c && a<b && b>=c){
     printf ("A ordem crescente é:<-%.2f-%.2f-%.2f->",a,c,b);	
	}
	 if (b<a && b<c && c>=a){
     printf ("A ordem crescente é:<-%.2f-%.2f-%.2f->",b,a,c);	
	}
	 if (b<a && b<=c && a>=c){
     printf ("A ordem crescente é:<-%.2f-%.2f-%.2f->",b,c,a);	
	}
	 if (c<a && c<b && a>=b){
     printf ("A ordem crescente é:<-%.2f-%.2f-%.2f->",c,b,a);	
	}
	 if (c<a && c<b && b>=a){
     printf ("A ordem crescente é:<-%.2f-%.2f-%.2f->",c,a,b);	
	}
	
	getch();
    return(1);

}
