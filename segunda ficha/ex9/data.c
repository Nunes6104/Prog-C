#include <stdio.h>
#include <stdlib.h>


//Faça um programa em C que permita ler o ano de nascimento da pessoa e como ano atual. 
//O programa deve imprimir a idade da pessoa. 
//Não se esqueça de verificar se o ano de nascimento informado é válido.

void main(){
    int dia, mes, ano;

    printf ("Indique o dia em que nasceu: ");
    scanf ("%d",&dia);

    printf ("Indique o mês em que nasceu: ");
    scanf ("%d", &mes);

    printf ("Indique o ano em que nasceu: ");
    scanf ("%d", &ano);


        if(dia <= 30 && dia < 0 && mes <= 12 && mes < 0 && ano <= 2023 && ano < 1900) printf ("\nA sua data de nascimento pela ordem dd/mm/aaaa é: %d/%d/%d", dia, mes, ano);
            else printf ("\nError data de nascimento inválida");


}