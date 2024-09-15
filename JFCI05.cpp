//JFCI - Operações das variaveis int(inteiro)
//Juan Fernando Coucolis Ishino 3/3/2023

#include <stdio.h>
main()
{
int x = 7400;  //define a variavel
int y = 40;		
int k = 100;
int resto = x%y; 	
int somaA = x+y;

printf("Soma: %d + %d = %d\n\n", x,y, somaA);
printf("Sub: %d - %d = %d\n\n",x,y, x-y);
printf("soma total: %d + %d +%d = %d\n\n",x,y,k,somaA+k);
printf("multiplicacao: %d x %d = %d\n\n",x,y, x*y);
printf("divisao: %d / %d = %d\n\n",x,y, x/y);
printf("resto da divisao: %d / %d = %d\n\n", x,y, resto);

}
