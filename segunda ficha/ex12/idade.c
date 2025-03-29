#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia a idade de uma pessoa e informe


void main(){
    int dia, mes, ano;

    printf ("Introduza o dia em que nasceu: ");
    scanf ("%d", &dia);

    printf ("Introduza o mês em que nasceu: ");
    scanf ("%d", &mes);

    printf ("Introduza o ano em que nasceu: ");
    scanf ("%d", &ano);

    if (ano <= 2005 && ano > 1958 && dia >= 1 && dia <= 31 && mes >= 1 && mes <=12) printf ("\nA data introduzida é de uma pessoa maior de idade");
        else if (ano > 2005 && ano <= 2023 && dia >= 1 && dia <= 31 && mes >= 1 && mes <=12) printf ("\nA data introduzida é de uma pessoa menor de idade");
        else if (ano <= 1958 && ano >= 1900 && dia >= 1 && dia <= 31 && mes >= 1 && mes <=12) printf ("\nA data introduzida é de uma pessoa com idade superior a 65 anos");
        else printf ("\nA data introduzida contém um erro");



}