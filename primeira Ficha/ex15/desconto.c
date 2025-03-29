#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que leia o valor de um produto, a percentagem do desconto desejado e mostre o valor do desconto e o valor do produto subtraindo o desconto.

int main(){
    float produto, desconto, descontop, descontof;

    printf ("Indique o valor do produto:");
    scanf ("%f", &produto);

    printf ("Indique a percentagem do desconto a aplicar:");
    scanf ("%f", &desconto);

    descontop= produto*(1-desconto/100);
    descontof= produto-descontop;

    printf ("O valor do produto com o desconto aplicado fica igual a: %.2f \nA diferenca do produto pelo produto com o desconto aplicado: %.2f", descontop, descontof);

    return 0;
}