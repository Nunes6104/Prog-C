#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".

void main(){
    int num;

    printf ("Introduza um número: ");
    scanf ("%d", &num);

    if (num == 20) printf ("\nIgual a 20");
        else if (num < 20) printf ("\nMenor do que 20");
                else printf ("\nMaior do que 20");



}