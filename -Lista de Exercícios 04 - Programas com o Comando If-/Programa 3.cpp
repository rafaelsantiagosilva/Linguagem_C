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
     printf ("A sua categoria � INFANTIL");	
	}
	if (idade>=8 && idade<=10){
	 printf ("A sua categoria � JUVENIL");
	}
	if (idade>=11 && idade<=15){
     printf ("A sua categoria � ADOLESCENTE"); 	
	}
	if (idade>=16 && idade<=30){
	 printf ("A sua categoria � ADULTO");
	}
	  if (idade>30){
     printf ("A sua categoria � S�NIOR");
	}
    
    getch();
    return(1);

}
