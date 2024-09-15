//JFCI06 - PONTO FLUTUANTE
//Juan Fernando Coucolis Ishino 8/3/2023

#include <stdio.h>

/*float denomina numeros decimais, %f
% indica que o proximo e um controle
o computador trabalha com 6 casas decimais com arredondamento
.define quantas casas decimais vai mostrar
*/

main()
{
float D, T;
D = 955.79;
T = 24.692907;

printf("A variavel Valor contem: %f\n", D);
printf("A variavel Taxa contem: %f\n", T);

printf("A variavel Valor contem: %.2f\n", D);
printf("A variavel Taxa contem: %5.3f\n", T);


}
