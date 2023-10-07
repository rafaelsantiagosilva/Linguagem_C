#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int i=0;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int somaIntervalo_AB(int a, int b);
	int numA=1, numB=2;
	printf("A soma dos números do intervalo inteiro de A e B é %d", somaIntervalo_AB(numA, numB));
	getch();
	return 0;
}

int somaIntervalo_AB(int a, int b){
	int soma=0;
	for(i=a; i<=b; i++){
		soma+=i;
	}
	return(soma);
}
