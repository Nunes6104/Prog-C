#include <stdio.h>
#include <stdlib.h>


//A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários. 
//O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. 
//Faça um programa em linguagem C que permita ler o salário 
//bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.

void main(){
    int sb, prst, vmsb;

    printf ("Introduza o salário bruto: ");
    scanf ("%d", &sb);

    printf ("Introduza o valor da prestação: ");
    scanf ("%d", &prst);

//calcular relação salário prestação
        vmsb = sb * 0.3;

        if (vmsb >= prst) printf ("\nO empréstimo será concedido");
            else printf ("\nO empréstimo não será concedido");

}