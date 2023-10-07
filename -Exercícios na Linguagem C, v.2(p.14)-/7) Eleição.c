#include<stdio.h>
#include<locale.h>
int fichas[7]={1, 2, 3, 4, 5, 6, 7};
int main(void){
	int eleitores = 3;
	int verificar_dados(int eleitores);
	setlocale(LC_ALL, "Portuguese");
	printf("----------------------CONTADOR DE VOTOS----------------------");
	printf("\nDe quanto eleitores você deseja contar os votos? ");
	scanf("%d", &eleitores);
	verificar_dados(eleitores);
	return 0;
}

int verificar_dados(int eleitores){
	int i=0, j=0, voto=0, votos[7]={0, 0, 0, 0, 0, 0, 0};
	for(i=0; i<eleitores; i++){
		printf("\nDigite o voto do %dº eleitor: ", i+1);
		scanf("%d", &voto);
		for(j=0; j<7; j++){
			if(voto == fichas[j]){
				votos[j]++;
			}
		}
	}
	printf("\nA quantidade de votos é de:\n");
	for(i=0; i<5; i++){
		printf("\nCandidato %d: %d", i+1, votos[i]);
	}
	printf("\n\nVotos nulo: %d", votos[5]);
	printf("\nVotos brancos: %d", votos[6]);
	
}
