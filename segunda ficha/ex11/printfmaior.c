#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia 3 números e imprima o maior deles

void main(){
    int num1, num2 ,num3;


    printf ("Itroduza um número: ");
    scanf ("%d", &num1);

    printf ("Introduza o segundo número: ");
    scanf ("%d", &num2);

    printf ("Introduza o terceiro número: ");
    scanf ("%d", &num3);

    if ((num1 > num2) && (num1 > num3))    printf ("\nO maior número introduzido é: %d", num1);
    else if ((num2 > num1) && (num2 > num3))  printf ("\nO maior número introduzido é: %d", num2);
    else   printf ("\nO maior número introduzido é: %d", num3);
}