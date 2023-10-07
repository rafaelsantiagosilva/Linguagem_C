#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i=0, j=0, matriz[3][3];

	printf("Digite 9 números:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		   scanf("%d", &matriz[i][j]);
	    }
	}
	printf("Em ordem contrária eles ficam:");
	for(i=2; i>=0; i--){
		for(j=2; j>=0; j--){
			printf(" %d ", matriz[i][j]);
		}
	}
	getch();
	return 0;
}
