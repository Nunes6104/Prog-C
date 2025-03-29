#include <stdio.h>
#include <stdlib.h>

//Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se 
//o valor da compra for menor que 20,00€, caso contrário, o lucro será de 30%.
//faça um programa em C que leia o valor do produto e imprima o valor da venda.

void main(){
    float produto, valorvend;

    printf ("Introduza o valor do produto: ");
    scanf ("%f", &produto);

    if (produto < 20){
        valorvend = produto * 0.55;
        printf ("\nO Comerciante terá de vender o produto por: %.2f€", valorvend);
    }
        else {
            valorvend = produto * 0.70;
            printf ("\nO Comerciante terá de vender o produto por: %.2f€", valorvend);
        }

}