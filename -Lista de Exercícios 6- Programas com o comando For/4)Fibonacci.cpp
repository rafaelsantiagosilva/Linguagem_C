#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int n, x=0, y=1, z, a;
int main()
{
    setlocale(LC_ALL, "Portuguese");
	printf("Digite a posi��o desejada da sequ�ncia de Fibonacci: ");
    scanf("%d", &n);
	    printf("Os %d primeiros termos da sequ�ncia de Fibonacci s�o:\n", n);
        printf(" %d", x);
        printf(" %d", y);

       for (a=3; a<=n; a++){
            z=x+y; 
            printf(" %d", z); 
            x=y; 
            y=z; 
        }

    getch();
    return(1);
    
}
