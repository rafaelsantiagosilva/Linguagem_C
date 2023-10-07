#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float h,c1,c2,x,y,z;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o valor da hipotenusa: ");
    scanf ("%f",&h);
    printf("Entre com o valor do cateto: ");
    scanf ("%f",&c1);
    printf("Entre com o valor do 2º cateto: ");
    scanf ("%f",&c2);
    
    x=h*h;
    y=(c1*c1)+(c2*c2);
    
    if (x==y){
     printf ("É um triângulo retângulo");	
	}if (x>y){
	 printf ("É um triângulo obstusângulo");
	}if (x<y){
	 printf ("É um triângulo acutuângulo");	
	}
    
    getch();
    return(1);

}
