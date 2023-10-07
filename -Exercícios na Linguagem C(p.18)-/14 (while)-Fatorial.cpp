#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

int x,y=1;

int main (){
setlocale (LC_ALL,"Portuguese");

    printf("Digite um número:");
	scanf("%d",&x);	
	while (x>=1){
     y=y*x;
     x--;
    }
     printf("\n%.d",y); 
    getch();
    return(1);

}
