#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
float p, m, s, i;
int main (){
	setlocale(LC_ALL,"Portuguese");
    for(i=1; i<=5; i++){
 	 printf("Digite o peso:");
 	 scanf("%f", &p);
 	 s += p;
 	 m = s/5;
	}
	printf("A média dos pesos é:%.3f",m);

    getch();
    return(1);

}
