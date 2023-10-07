#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    int idade,ano,dias;
int main (){
   setlocale(LC_ALL,"Portuguese");
    printf("Coloque sua idade: ");
    scanf ("%i",&idade);
    ano=2023-idade;
    dias=365*idade;
    printf("\nO ano que voce nasceu é:%i",ano);
    printf ("\ne vc viveu essa quantidade de dias:%i",dias);
    getch();
    return(1);

}
