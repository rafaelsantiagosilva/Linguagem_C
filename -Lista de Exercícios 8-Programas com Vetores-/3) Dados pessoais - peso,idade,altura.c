// Rafael Santiago da Silva 1D - Exercício 03

#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int pessoas=25, idadeMaior50=0;
	int idade[pessoas], i=0; 
	float altura[pessoas], peso[pessoas], porcentagemIP40=0, mediaAlturas=0, inferiorPeso40=0, idade10_20=0;
	printf("Digite os dados de %d pessoas:\n\n", pessoas);
	for(i=0; i<pessoas; i++){
		printf("Idade da %dº pessoa: ", i+1);
		scanf("%d", &idade[i]);
		printf("Altura da %dº pessoa: ", i+1);
		scanf("%f", &altura[i]);
		printf("Peso da %dº pessoa: ", i+1);
		scanf("%f", &peso[i]);
		if(idade[i] > 50){
			idadeMaior50++;
		}
		
		if(idade[i]>=10 && idade[i]<=20){
			mediaAlturas = mediaAlturas + altura[i];
			idade10_20++;
		}
		
		if(peso[i]<40){
			inferiorPeso40++;
		}
	}
	mediaAlturas = mediaAlturas / idade10_20;
	porcentagemIP40 = inferiorPeso40 / pessoas;
	porcentagemIP40 = porcentagemIP40 * 100;
	printf("\n•Há %d pessoas com mais de 50 anos;", idadeMaior50);
	printf("\n•A média das alturas das pessoas com idade entre 10 e 20 anos é de %.2f;", mediaAlturas);
	printf("\n•A quantidade de pessoas, em porcentagem, com peso inferior a 40 quilos é de %.2f%%.", porcentagemIP40);
	getch();
	return 0;
}
