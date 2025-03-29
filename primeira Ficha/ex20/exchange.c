#include <stdlib.h>
#include <stdio.h>

//Faça um programa em C que efetue a apresentação do valor da conversão em Euros (EUR$) de um valor lido em dólar (US$)
//Para isso, será necessário também ler o valor da cotação do dólar.


int main(){
    float dollar, euro;
    
    printf("Introduza o valor dollar para conversao: ");
    scanf ("%f", &dollar);

    //conversao de dollar para euro euro = dollar * 0,94
    euro = 0.94 * dollar;

    printf ("\nO valor de %.2f dollar para euro corresponde a: %.2f", dollar, euro);


    return 0;
}