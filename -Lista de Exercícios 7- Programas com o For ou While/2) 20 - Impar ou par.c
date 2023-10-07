#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int num, i=0, res, par, imp;

int main(){
	setlocale (LC_ALL, "Portuguese");
	//Ler 20 variáveis
	while (i<20){
		printf("Digite o número:");
		scanf("%i", &num);
		//Calcular resto de num's
        res = num%2;
        //Contar quantos pares e quantos ímpares tem
        i++;
		if (res==0){
       		par++;
        }
        else{
        	imp++;
		}
    }
    //Imprimir quantos impares tem e quantos pares tem
    printf("Há %i números pares e %i números ímpares.", par, imp);
getch();	
return (1);
}  
 


