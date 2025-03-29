#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, 
//o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. 
//Ao final, o programa deve mostrar o valor da prestação atrasada, 
//o período de atraso, os juros que serão cobrados pelo período de atraso, 
//o valor da prestação acrescido dos juros. Considere juros simples.

int main(){
    float prsta, prstv, txp, pa, juros;

    printf ("Introduza o valor da prestacao vencida: ");
    scanf ("%f", &prstv);

    printf ("Indique a taxa periodica de juros: ");
    scanf ("%f", &txp);

    printf ("Indique o periodo de atraso: ");
    scanf ("%f", &pa);

//juros = prestacao * juros * periodo de atraso
//prestacao em atraso = prestacao + juros
            juros = prstv * txp * pa;
            prsta = prstv + juros;

    printf ("\nO valor da prestacao em atraso: %.2f\n", prstv);
    printf ("Periodo de atraso: %.2f\n", pa);
    printf ("Os juros a serem cobrados pelo atraso serao: %.2f\n", juros);
    printf ("Valor da prestacao acrescido dos juros e de: %.2f\n", prsta);

return 0;
}