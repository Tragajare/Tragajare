//JFCI08 - Operacoes ponto flutuante
//Juan Fernando Coucolis Ishino 8/3/2023


#include <iostream>

//nao existe resto de divisao de variaveis ponto flutuante

main()
{
float k1, k2;		 //k1= numero pi , k2=numero random
k1 = 3.1416;
k2 = 477.23;

float soma, produto, sub, div1, div2;
soma = k1+k2;
produto = k1*k2;
div1 = k1/k2;
div2 = k2/k1;
sub = k1-k2;

printf("Soma: %f + %f = %f\n\n", k1, k2, soma);
printf("MULT arredondado: %f x %f = %.3f\n\n", k1, k2,produto);
printf("MULT: %f x %f = %f\n\n", k1, k2,produto);
printf("Div 1: %f / %f = %f\n\n", k1, k2, div1);
printf("Div 2: %.3f / %.3f = %.3f\n\n", k2, k1, div2);
printf("Sub: %f - %f = %f\n\n", k1,k2,sub);

system("pause");


}
