#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int x,y,z;
int main (){
setlocale (LC_ALL,"Portuguese");
	for (x=1000; x<=2000; x=x+1){
        if(x%11==5){
			printf(" %d",x);
	}
}

    getch();
    return(1);

}
