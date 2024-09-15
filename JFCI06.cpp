//JFCI06 - Operações das variaveis int(inteiro)
//Juan Fernando Coucolis Ishino 3/3/2023
/* problema a resoler: dados os lados de um retangulo,
calcular sua area e o seu perimetro usando variaveis proprias
*/

#include <iostream>

main()
{
int lado1 = 25;
int lado2 = 67;
int perimetro, area;

perimetro = 2*(lado1 + lado2);
area = lado1 * lado2;

printf("perimetro = %d + %d + %d + %d = %d\n\n", lado1, lado1, lado2, lado2, perimetro);
printf("area = %d x %d = %d\n\n", lado1, lado2, area);

printf("perimetro = %d\n", perimetro);

system("pause");

}
