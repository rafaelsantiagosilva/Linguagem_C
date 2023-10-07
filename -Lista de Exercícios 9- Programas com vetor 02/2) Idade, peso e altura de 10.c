// Rafael Santiago da Silva 1D - Exercício 02
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

const pessoas = 10;
int main(void){
	setlocale(LC_ALL, "Portuguese");
	float pesos[pessoas], alturas[pessoas], mediaIdades=0, porcentagem_1030_190m=0, contadorIdade10_30=0, contadorAltura190=0;
	int idades[pessoas], i=0, pessoas_90kg_150m=0;
	printf("			==========Exercício 02 - Idade, peso e altura de 10 pessoas==========\n");
	
	for(i=0; i<pessoas; i++){
		printf("Digite a idade da %dº pessoa: ", i+1);
		scanf("%d", &idades[i]);
		mediaIdades = mediaIdades + idades[i];	
		printf("Digite o peso da %dº pessoa: ", i+1);
		scanf("%f", &pesos[i]);
		printf("Digite a altura da %dº pessoa: ", i+1);
		scanf("%f", &alturas[i]);
		if(alturas[i] > 1.90){
			if(idades[i] >= 10 && idades[i] <= 30){
				contadorIdade10_30++;
			}
			contadorAltura190++;
		}
		if(pesos[i] > 90 && alturas[i] < 1.50){
			pessoas_90kg_150m++;
		}
	}
	mediaIdades = mediaIdades / pessoas;
	if(contadorAltura190 == 0){
		porcentagem_1030_190m = 0;
	}else{
		porcentagem_1030_190m = (contadorIdade10_30/contadorAltura190) * 100;
	}
	printf("•A média das idades das pessoas é igual a %.2f;\n", mediaIdades);
	printf("•Há %d pessoas com peso superior a 90kg e altura inferior a 1,50m;\n", pessoas_90kg_150m);
	printf("•A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m é de %.2f%%.", porcentagem_1030_190m);
	
	getch();
	return 0;
}
