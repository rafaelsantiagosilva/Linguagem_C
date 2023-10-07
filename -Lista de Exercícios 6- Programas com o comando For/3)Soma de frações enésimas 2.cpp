#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
float x=0,y,n;
int main (){
setlocale (LC_ALL,"Portuguese");
    printf("Entre com o número limite:");
	scanf("%f",&n);	
	for (x=0; x<=n; x=x+1){
	    
	    	printf("\n%d",x);
    }
	    

    getch();
    return(1);

}
