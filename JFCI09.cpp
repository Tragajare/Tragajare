//JFCI09 - notas de alunos
//Juan Fernando Coucolis Ishino 8/3/2023

/*dadas 3 notas de um aluno, calcular a media aritmetica
Mostrar a media nos seguintes casos:
sem edicao do valor,
com 1 e com 3 casas decimais,
sem casas decimais*/

#include <iostream>

main()
{
float n1, n2, n3, med;
n1 = 6.5;
n2 = 9.0;
n3 = 8,54;
med= (n1+n2+n3)/3;

printf("notas do juan: %.f %f %f\n\n",n1,n2,n3);
printf("media do juan: %f + %f + %f = %f\n\n", n1,n2, n3,med);
printf("media do juan com 1 casa decimal: %.1f + %.1f + %.1f = %.1f\n\n", n1,n2, n3, med);
printf("media do juan com 3 casas decimais: %.3f + %.3f + %.3f = %.3f\n\n", n1,n2,n3, med);
printf("media do juan com .0 n casa decimal: %.0f + %.0f + %.0f = %.0f\n\n", n1,n2, n3, med);
}
