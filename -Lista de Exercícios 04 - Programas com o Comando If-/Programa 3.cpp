#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    int idade;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Digite a sua idade:");
    scanf ("%i",&idade);
                                                                                                                                                      
    
    if (idade>=5 && idade<=7){
     printf ("A sua categoria é INFANTIL");	
	}
	if (idade>=8 && idade<=10){
	 printf ("A sua categoria é JUVENIL");
	}
	if (idade>=11 && idade<=15){
     printf ("A sua categoria é ADOLESCENTE"); 	
	}
	if (idade>=16 && idade<=30){
	 printf ("A sua categoria é ADULTO");
	}
	  if (idade>30){
     printf ("A sua categoria é SÊNIOR");
	}
    
    getch();
    return(1);

}
