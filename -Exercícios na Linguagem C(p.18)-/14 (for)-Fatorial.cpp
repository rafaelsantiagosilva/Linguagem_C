#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

int n,x,y=1;

int main (){
setlocale (LC_ALL,"Portuguese");

    printf("Digite um número:");
	scanf("%d",&n);	

	for (x=n; x>=1; x--){
     y=y*x;

    }
     printf("\n%.d",y); 
    getch();
    return(1);

}
