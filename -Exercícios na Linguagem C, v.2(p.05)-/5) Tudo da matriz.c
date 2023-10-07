#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=0, m=0, qntd1=0, somaDP=0, somaDS=0, i=0, j=0;
	float media=0;
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d", &n);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d", &m);
	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%dºlinha, %dºcoluna: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
//			Soma de todos os elementos
			media+=matriz[i][j];
//			Quantos 1 aparecem
			if(matriz[i][j]==1){
				qntd1++;
			}
			if(m==n){
//				Soma da DP
				if(i==j){
					somaDP+=matriz[i][j];
				}
//          	Soma da DS
				if((i+1)+(j+1)==(n+1){
					somaDS+=matriz[i][j];
				}
			}
		}
	}
//	Calculando a media
	media/=(n*m);
	printf("\n->A média da matriz é de %.2f;", media);
	printf("\n->Aparece %d vezes o número 1 nessa matriz;", qntd1);
	printf("\n->A soma dos elementos da Diagonal Principal é de %d;", somaDP);
	printf("\n->A soma dos elementos da Diagonal Secundária é de %d.", somaDS);
	getch();
	return 0;
}
