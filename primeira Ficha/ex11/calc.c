#include <stdio.h>
#include <stdlib.h>

int main(){

float num1, num2, soma, sub, div, mult;

printf ("Introduza um numero real:");
scanf ("%f", &num1);

    printf ("Introduza o segundo numero real:");
    scanf ("%f", &num2);

//calculo das expressoes
(soma= num1+num2);
(sub= num1-num2);
(div=num1/num2);
(mult= num1*num2);

//mostrar os valores obtidos
printf ("Dos valores colocados obtemos das 4 operacoes os numeros \nsoma: %.25f \nsubtracao: %.2f \nMultiplicacao: %.2f \nDivisao: %.2f", soma, sub, mult, div);

return 0;
}