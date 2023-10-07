#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float numeros[10], media;
	printf("Digite 10 números:\n");
	int i;
	for(i = 0 ; i < 10; i++){
		scanf("%f", &numeros[i]);
		media += numeros[i];
	}
	media /= 10;
	printf("A média da soma destes elementos é %.2f", media);
	getch();
	return(1);
}

