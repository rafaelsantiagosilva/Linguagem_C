#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float salario,aumento,snovo;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Digite o valor de seu sal�rio: ");
    scanf ("%f",&salario);
    
     if (salario<350.00){
     aumento=0.15*salario;
	 snovo=aumento+salario;	
     printf ("\nO aumento ser� de R$%.2f",aumento);
	 printf ("\nO seu novo sal�rio ser� de R$%.2f",snovo);	
	}
	 if (salario>=350.00 && salario<700.00){
     aumento=0.10*salario;
	 snovo=aumento+salario;	
     printf ("\nO aumento ser� de R$%.2f",aumento);
	 printf ("\nO seu novo sal�rio ser� de R$%.2f",snovo);	
	}
	 if (salario>=700.00 && salario<1000.00){
     aumento=0.05*salario;
	 snovo=aumento+salario;	
     printf ("\nO aumento ser� de R$%.2f",aumento);
	 printf ("\nO seu novo sal�rio ser� de R$%.2f",snovo);	
	}
	 if (salario>=1000.00){
     aumento=0.00*salario;
	 snovo=aumento+salario;	
     printf ("\nO aumento ser� de R$%.2f",aumento);
	 printf ("\nO seu sal�rio se manter� em R$%.2f",snovo);	
	}
	 
	getch();
    return(1);

}
