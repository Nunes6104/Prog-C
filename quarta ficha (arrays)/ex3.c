#include <stdio.h>
#include <stdlib.h>

//Construa um programa em C que armazene 15 números num vetor e imprima uma 
//listagem numerada contendo o número e uma das mensagens: par ou ímpar.

void main(){
    int num[14], i;

    printf ("Introduza 15 números: ");
    for (i=0; i<15; i++){
        scanf ("%d", &num[i]);
    }

    for (i=0; i<15; i++){
    if (num[i] % 2 == 0){
        printf ("%d --> %d      este numero é par\n", i+1, num[i]);
    }
    else printf ("%d --> %d      este numero é impar\n", i+1, num[i]);
    }

}