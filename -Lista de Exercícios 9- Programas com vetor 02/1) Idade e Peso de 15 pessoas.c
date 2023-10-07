// Rafael Santiago da Silva 1D Exercício 01
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

const pessoas = 15;
int main(void){
	// Os contadores são de faixas etárias
	int idade[pessoas], i=0, contador1a10=0, contador11a20=0, contador21a30=0, contador31=0;
	float peso[pessoas], mediaPeso1a10=0, mediaPeso11a20=0, mediaPeso21a30=0, mediaPeso31=0;
	setlocale(LC_ALL, "Portuguese");
	printf("			==========Exercício 01 - Idade e peso de 15 pessoas==========\n");
	for(i=0; i<pessoas; i++){
		printf("Insira a idade da %dº pessoa: ", i+1);
		scanf("%d", &idade[i]);
		if(idade[i] <= 0){
			printf("ERRO: Idade não pode ser negativa ou igual a 0!\n");
			break;
		}
		printf("Insira o peso(kg) da %dº pessoa: ", i+1);
		scanf("%f", &peso[i]);
		if(peso[i] <= 0){
			printf("ERRO: Peso não pode ser negativo ou igual a 0!\n");
			break;
		}
		if(idade[i] >= 1 && idade[i] <= 10){
			contador1a10++;
			mediaPeso1a10 += peso[i];
		}
		if(idade[i] >= 11 && idade[i] <= 20){
			contador11a20++;
			mediaPeso11a20 += peso[i];
		}
		if(idade[i] >= 21 && idade[i] <= 30){
			contador21a30++;
			mediaPeso21a30 += peso[i];
		}
		if(idade[i] >= 31){
			contador31++;
			mediaPeso31 += peso[i];
		}
	}
	if(contador1a10 != 0){
		mediaPeso1a10 /= contador1a10;
	}
	if(contador11a20 != 0){
		mediaPeso11a20 /= contador11a20;	
	}
	if(contador21a30 != 0){
		mediaPeso21a30 /= contador21a30;
	}
	if(contador31 != 0){
		mediaPeso31 /= contador31;
	}
	printf("\n•A média dos pesos das pessoas com idade de 1 a 10 anos é de %.2f\n", mediaPeso1a10);
	printf("•A média dos pesos das pessoas com idade de 11 a 20 anos é de %.2f\n", mediaPeso11a20);
	printf("•A média dos pesos das pessoas com idade de 21 a 30 anos é de %.2f\n", mediaPeso21a30);
	printf("•A média dos pesos das pessoas com idade de 31 anos ou mais é de %.2f\n", mediaPeso31);
	getch();
	return 0;
}
