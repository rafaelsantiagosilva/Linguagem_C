#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int num, i=0, res, par, imp;

int main(){
	setlocale (LC_ALL, "Portuguese");
	//Ler 20 vari�veis
	while (i<20){
		printf("Digite o n�mero:");
		scanf("%i", &num);
		//Calcular resto de num's
        res = num%2;
        //Contar quantos pares e quantos �mpares tem
        i++;
		if (res==0){
       		par++;
        }
        else{
        	imp++;
		}
    }
    //Imprimir quantos impares tem e quantos pares tem
    printf("H� %i n�meros pares e %i n�meros �mpares.", par, imp);
getch();	
return (1);
}  
 


