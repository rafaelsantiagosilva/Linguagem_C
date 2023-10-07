#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	float n, x, z, y;
	printf("Digite o número limite:");
	scanf("%f",&n);
	for (x=1; x<=n; x=x+1){
		y=1/pow(x,x)+y;
	}
	 printf ("\n %.2f",y);
	 
	getch ();
	return (1);
}
