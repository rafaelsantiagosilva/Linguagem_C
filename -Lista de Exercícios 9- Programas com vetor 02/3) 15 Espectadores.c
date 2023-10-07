// Rafael Santiago da Silva 1D - Exercicio 3
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

const espectadores = 15;
char erro[] = {"ERRO - Tente novamente!"};
char instrucoes[] = {"\n|INSTRUÇÕES: Digite 1 para 'Regular', 2 para 'Bom' e 3 para 'Ótimo'.|\n\n"};

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int idade[espectadores], opiniao[espectadores], qtdPessoasRegular=0, qtdPessoasOtimo=0, i=0;
	float mediaIdadesOtimo=0, porcentagemBom=0, qtdPessoasBom=0;
	
	printf("			==========Exercício 03 - Idade e opinião de 15 espec.==========\n");
	printf("%s", instrucoes);
	
	for(i=0; i<espectadores; i++){
		printf("Digite a idade e opinião do %dº integrante: ", i+1);
		scanf("%d%d", &idade[i], &opiniao[i]);
		
		if(opiniao[i] != 1 && opiniao[i] != 2 && opiniao[i] != 3 || idade[i] <= 0){
			printf("%s", erro);
			break;
		}else{
            if(opiniao[i] == 3){
                mediaIdadesOtimo += idade[i];
                qtdPessoasOtimo++;
            }
            
            if(opiniao[i] == 2){
		  	    qtdPessoasBom++;
		    }
		    
		    if(opiniao[i] == 1){
		  	    qtdPessoasRegular++;
		   }
		}	
	}
	
	if(qtdPessoasOtimo == 0){
		mediaIdadesOtimo = 0;
	}else{
		mediaIdadesOtimo = mediaIdadesOtimo / qtdPessoasOtimo;	
	}
	porcentagemBom = qtdPessoasBom / espectadores;
	porcentagemBom = porcentagemBom * 100;
	
	printf("\n-> A média das idades das pessoas que responderam 'ótimo' é de %.2f;", mediaIdadesOtimo);
	printf("\n-> A quantidade de pessoas que respondeu 'regular' é de %d pessoas;", qtdPessoasRegular);
	printf("\n-> A porcentagem de pessoas que responderam 'bom' entre todas analisadas é de %.2f%%", porcentagemBom);
	getch();
	return 0;
}
