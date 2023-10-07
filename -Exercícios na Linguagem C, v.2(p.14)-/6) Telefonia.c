#include<stdio.h>
#include<locale.h>

int i=0;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int assinantes=0, verificar_pulsos(int assinantes, int codigo[], int classe[], int pulsos[]);
	printf("--------------------------RELATORIANDO--------------------------");
	printf("\n\nDigite a quantidade de assinantes que deseja realizar o relatório: ");
	scanf("%d", &assinantes);
	int codigo[assinantes], classe[assinantes], pulsos[assinantes];
	printf("\nOk. Digite os dados dos %d assinantes: \n", assinantes);
	for(i=0; i<assinantes; i++){
		printf("\n");
		printf("Código do %dºassinante: ", i+1);
		scanf("%d", &codigo[i]);
		printf("Classe do %dºassinante: ", i+1);
		scanf("%d", &classe[i]);
		printf("Quantidade de pulsos do %dºassinante: ", i+1);
		scanf("%d", &pulsos[i]);
	}	
	printf("\n----------------------------------------------------------------\n");
	printf("OS ASSINANTES COM O MAIOR NUMERO DE PULSOS DE SUA CLASSE SÃO:");
	verificar_pulsos(assinantes, codigo, classe, pulsos);
	printf("\n----------------------------------------------------------------");
	return 0;
}

int verificar_pulsos(int assinantes, int codigo[], int classe[], int pulsos[]){
	int maior1=0, maior2=0, maior3=0, maior4=0;
	for(i=0; i<assinantes; i++){
		switch(classe[i]){
			case 1:
				if(pulsos[i] > maior1){
					maior1=codigo[i];
				}
			break;
			
			case 2:
				if(pulsos[i] > maior2){
					maior2=codigo[i];
				}
			break;
			
			case 3:
				if(pulsos[i] > maior3){
					maior3=codigo[i];
				}
			break;
			
			case 4:
				if(pulsos[i] > maior4){
					maior4=codigo[i];
				}
			break;
		}
	}
	int maiores[4] = {maior1, maior2, maior3, maior4};
	for(i=0; i<4; i++){
		printf("\nCÓDIGO DO MAIOR DA CLASSE %d: %d", i+1, maiores[i]);
	}
	return 0;
}

