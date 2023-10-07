#include<math.h>
#include<conio.h>
#include<stdio.h>
int x,y;
int main (){
    for(x=0; x<=100; x=x+2){
    	y=y+x;
	} 
    printf("A soma e %d",y);
    getch();
    return(1);

}
