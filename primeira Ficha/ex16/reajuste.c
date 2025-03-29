#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que calcule o reajuste do salário de um funcionário. 
//Para isso, o programa deverá ler o salário atual do funcionário e ler a percentagem de reajuste. 
//No final mostrar o valor do novo salário.

int main(){
    float salarioatm, ajustep, newsalario;

    printf ("Introduza o salario do funcionario:");
    scanf ("%f", &salarioatm);

    printf ("Introduza a percentagem de reajuste:");
    scanf ("%f", &ajustep);

    newsalario= salarioatm*(1+ajustep/100);

    printf ("O novo salario do funcionario sera: %.2f", newsalario);

    return 0;
}