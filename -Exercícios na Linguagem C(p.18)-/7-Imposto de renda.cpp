#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    float imposto,desconto,cpf,dependentes,renda;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Digite o número de seu CPF:");
    scanf ("%f",&cpf);
    printf("Digite a quantidade de dependentes que possui:");
    scanf ("%f",&dependentes);
    printf("Digite o valor de sua renda anual:");
    scanf("%f",&renda);
                           
    desconto=dependentes*300;
    
    if (renda<=12000.00){
    	imposto=0;
    printf ("Você está isento de pagar o tributo");	
    }
	if(renda>=12000.01 && renda<=60000.00){
		imposto=(0.05*renda)-desconto;
    printf ("O valor do seu imposto de renda é:R$%.2f",imposto);
	}
	if(renda>=60000.01 && renda<=120000.00){
		imposto=(0.10*renda)-desconto;
	printf ("O valor do seu imposto de renda é:R$%.2f",imposto);
	}
	if(renda>=120000.01){
		imposto=(0.15*renda)-desconto;
	printf ("O valor do seu imposto de renda é:R$%.2f",imposto);
	}
    
    getch();
    return(1);

}
