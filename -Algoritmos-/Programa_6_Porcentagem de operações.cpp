#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float x,y,s,p,sq,q;
int main (){
   setlocale(LC_ALL,"Portuguese"); 
	printf("Entre com um valor: ");
    scanf ("%f",&x);
    printf("Entre com o outro valor: ");
    scanf ("%f",&y);
    s=(x+y)*20/100;
    p=x*y*30/100;
    sq=(sqrt(x)+sqrt(y))*40/100;
    q=x*x*y*y*50/100;
    printf ("\n20%% da soma destes valores é:%.2f",s);
    printf ("\n30%% do produto destes valores é:%.2f",p);
	printf ("\n40%% da soma das raizes destes valores é:%.2f",sq);
	printf ("\n50%% do produto dos quadrados destes valores é:%.2f",q);    
    
    getch();
    return(1);

}
