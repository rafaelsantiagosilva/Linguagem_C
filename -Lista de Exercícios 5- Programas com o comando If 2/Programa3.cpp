#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float um, dois, tres, quatro, cinco;
int main (){
   setlocale(LC_ALL,"Portuguese");
   printf("Entre com a nota da prova 1: ");
   scanf("%f", &um);
   printf("Entre com a nota da prova 2: ");
   scanf("%f", &dois);
   printf("Entre com a nota da prova 3: ");
   scanf("%f", &tres);
   printf("Entre com a nota da prova 4: ");
   scanf("%f", &quatro);
   printf("Entre com a nota da prova 5: ");
   scanf("%f", &cinco);
   	if (um>=7 && dois>=7 && tres>=7 &&quatro>=7 &&cinco>=7){
   	printf("Sua classificação é A");
	}
	if (um>=7 && dois>=7 && quatro>=7 && tres<7 && cinco<7){
	printf("Sua classificação é B");	
	}
	if (um>=7 && dois>=7 && tres>=7 && quatro>=7 && cinco<7 ){
	printf("Sua classificação é C");	
	}
	if (um<7 && dois<7 && tres<7 && quatro<7 && cinco<7){
	printf("Você foi reprovado");	
	}
	
	 
	getch();
    return(1);

}
