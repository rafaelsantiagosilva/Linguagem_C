#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o tamanho da sequência: ");
	int tamanho = 0, maiorValor = 0, posicao=0;
	scanf("%i", &tamanho);
	int sequencia[tamanho], i=0;
	printf("\nDigite %i números diferentes:\n");
	for(i = 0; i < tamanho; i++){
		scanf("%i", &sequencia[i]);
		if(sequencia[i] > maiorValor){
			maiorValor = sequencia[i];
			posicao = i+1;
		}
	}
	printf("O maior valor é %i na %dºposição.", maiorValor, posicao);
	getch();
	return(1);
}

