#include <stdio.h>
#include <stdlib.h>

//Faça um programa que calcule e imprima o fatorial de um número,
//usando uma função que receba um valor e retorne o fatorial desse valor

int calcfat(int num){
    int i, fatorial=1;

    for (i = 2; i <= num; i++)
        fatorial *= i;

    return fatorial;
}


int main(){
   int num, fatorial=0;

    printf ("Introduze um numero: ");
    scanf ("%d", &num);

    fatorial = calcfat(num);

    printf ("O numero %d em fatorial: %d", num, fatorial);

return 0;
}