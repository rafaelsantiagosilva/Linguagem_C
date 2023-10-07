#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float somar(float n1, float n2);
	float subtrair(float n1, float n2);
    float multiplicar(float n1, float n2);
    float dividir(float n1, float n2);
	float numero1=0, numero2=0;
	
	char operador='+';
	printf("Digite 2 números: ");
	scanf("%f%f", &numero1, &numero2);
	
	printf("Qual operação você deseja efetuar? (+ - x /): ");
	scanf("%s", &operador);
	if(/*operador != '+' && operador != '-' && operador != 'x' && operador != 'X' && operador != '/' || */ operador == '0'){
		printf("ERRO: Por favor digite uma operação válida.");
	}else{
	  if(operador == '+'){
         somar(numero1, numero2);
	  }
	  if(operador == '-'){
	     subtrair(numero1, numero2);		
      }
      if(operador == 'x' || operador == 'X'){
         multiplicar(numero1, numero2);
      }
      if(operador == '/'){
         dividir(numero1, numero2);
      }
    }

	getch();
	return 0;
}

float somar(float n1, float n2){
	float resultado = n1 + n2;
	printf("A soma é de %.2f", resultado);
	return(resultado);
}

float subtrair(float n1, float n2){
	float resultado = n1 - n2;
	printf("A diferença é de %.2f", resultado);
	return(resultado);
}

float multiplicar(float n1, float n2){
	float resultado = n1 * n2;
	printf("O produto é de %.2f", resultado);
	return(resultado);
}

float dividir(float n1, float n2){
	float resultado = n1 / n2;
	printf("O quociente é de %.2f", resultado);
	return(resultado);
}
