#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int qtd_pessoa=0, idade, mais90=0;
float peso, soma, media;

int main (){
	setlocale (LC_ALL, "Portuguese");
	while (qtd_pessoa<7){
		//Ler idade e peso das 7 pessoas
		printf("\nDigite a idade de uma pessoa:");
		scanf("%i", &idade);
		printf("\nDigite o peso da mesma pessoa (em quilos):");
		scanf("%f", &peso);
		qtd_pessoa++;
		//Contar quantas pessoas tem mais de 90kg
		if (peso>90){
			mais90++;
		}
		//Tirar as médias das idades
		soma += idade;
		media = soma/7;
	}
	
printf("\nHá %i pessoas com mais de 90 quilos", mais90);
printf(" e a média da idade das pessoas é igual há %.3f...", media);

getch ();
return (1);
}

