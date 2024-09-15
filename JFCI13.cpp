//JFCI13 - entrar com 3 valores de ponto flutuante + 3 requisitos
//Juan Fernando Coucolis Ishino 8/3/2023
//requisitos 
/*
1.separados por tabulacao
2.encolunados com o ponto encolunado e com a soma calculada
3.idem com 5 casas decimais
*/
#include <stdio.h>
main()
{
float n1,n2,n3,soma;


printf("digite 3 numeros: ");
scanf("%f %f %f",&n1,&n2,&n3);

soma= n1+n2+n3;
printf("Numeros digitados foram: %10.2f\t %10.2f\t %10.2f\n\n", n1, n2, n3);
printf("somando\n %10.2f\n %10.2f\n %10.2f\n --------------\n %10.2f\n\n", n1,n2,n3,n1+n2+n3);



printf("Numeros digitados foram: %10.5f\t %10.5f\t %10.5f\n\n", n1, n2, n3);
printf("somando\n %10.5f\n %10.5f\n %10.5f\n --------------\n %10.5f", n1,n2,n3,soma);




}
