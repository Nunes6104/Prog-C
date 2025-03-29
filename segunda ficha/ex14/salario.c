#include <stdio.h>
#include <stdlib.h>

//Faça um programa que permita ler o salário de uma pessoa e imprima o desconto do IRS segundo a tabela seguir:

void main(){
    float salario, desconto1, desconto2, desconto3;

    printf ("introduza o salário base: ");
    scanf ("%f", &salario);

    desconto1 = salario * (0.2);
    desconto2 = salario * (0.25);
    desconto3 = salario * (0.30); 

    if (salario <= 800)     printf ("\nIsento de pagamento do IRS");
        else if (salario > 800 && salario <= 1200){
            printf ("\nO Valor de IRS descontado segundo a tabela corresponde a: %.2f", desconto1);
        }
        else if (salario > 1200 && salario <= 2000){
            printf ("\nO Valor de IRS descontado segundo a tabela corresponde a: %.2f", desconto2);
        }
        else printf ("\nO Valor de IRS descontado segundo a tabela corresponde a: %.2f", desconto3);
}