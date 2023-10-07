#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

    int x,y,z,b1,b2,b3,b4,b5,b6,b7,b8,b9;
int main (){
   setlocale(LC_ALL,"Portuguese");
    
	printf("Entre com o peso da bolinha 1: ");
    scanf ("%i",&b1);
    printf("Entre com o peso da bolinha 2: ");
    scanf ("%i",&b2);
    printf("Entre com o peso da bolinha 3: ");
    scanf ("%i",&b3);
    printf("Entre com o peso da bolinha 4: ");
    scanf ("%i",&b4);
    printf("Entre com o peso da bolinha 5: ");
    scanf ("%i",&b5);
    printf("Entre com o peso da bolinha 6: ");
    scanf ("%i",&b6);
    printf("Entre com o peso da bolinha 7: ");
    scanf ("%i",&b7);
    printf("Entre com o peso da bolinha 8: ");
    scanf ("%i",&b8);
    printf("Entre com o peso da bolinha 9: ");
    scanf ("%i",&b9);
    
    x=b1+b2+b3;
    y=b4+b5+b6;
    z=b7+b8+b9;
   
    if (x>y && x>z){
     if (b1>b2 && b1>b3){
      printf ("A bolinha 1 é a mais pesada.");
	}if (b2>b1 && b2>b3){
	  printf ("A bolinha 2 é a mais pesada."); 
	}if (b3>b1 && b3>b2){
	  printf ("A bolinha 3 é a mais pesada.");}
    }
    
	if (y>x && y>z){
     if (b4>b5 && b4>b6){
      printf ("A bolinha 4 é a mais pesada.");
	}if (b5>b4 && b5>b6){
	  printf ("A bolinha 5 é a mais pesada."); 
	}if (b6>b4 && b6>b5){
	  printf ("A bolinha 6 é a mais pesada.");}
    }
	
	if (z>x && z>y){
     if (b7>b8 && b7>b9){
      printf ("A bolinha 7 é a mais pesada.");
	}if (b8>b7 && b8>b9){
	  printf ("A bolinha 8 é a mais pesada."); 
	}if (b9>b7 && b9>b8){
	  printf ("A bolinha 9 é a mais pesada.");}
    }
	
	
    getch();
    return(1);

}
