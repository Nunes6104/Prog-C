#include <stdio.h>
#include <stdlib.h>

void main (){
    int num;
//Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não.

    printf ("Introduza um número: ");
    scanf ("%d", &num);

    if (num <= 50 && num >= 20) printf ("\nO número %d está compreendido entre 20 e 50", num);

        else printf ("\nO número %d não está compreendido entre 20 e 50", num);

}



