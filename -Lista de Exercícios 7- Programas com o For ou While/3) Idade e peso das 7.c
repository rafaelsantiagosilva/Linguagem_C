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
		//Tirar as m�dias das idades
		soma += idade;
		media = soma/7;
	}
	
printf("\nH� %i pessoas com mais de 90 quilos", mais90);
printf(" e a m�dia da idade das pessoas � igual h� %.3f...", media);

getch ();
return (1);
}

