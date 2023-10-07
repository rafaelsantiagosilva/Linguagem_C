#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

float n, num=0, den, s, sub=0, fracao;

int main (){
	setlocale (LC_ALL, "Portuguese");
	//Lendo valor de n
	printf("Digite o valor de n:");
	scanf("%f", &n);
	//Fazendo os Numeradores e Denominadores
    while (num<n){
    	den = n - sub;
    	num++;
    	fracao = num / den;
    	sub++;
    	//Somando as frações
    	s += fracao;
	}

printf("\nA soma das frações é:%.4 f...", s);
	
getch();
return(1);

}
