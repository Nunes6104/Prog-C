#include <stdio.h>
#include <stdlib.h>

//Faça um programa que armazene 8 números num vetor e imprima todos os números. 
//No final, imprima o total de números múltiplos de seis.

void main(){
    int vetor[8], soma=0, i;
    
    printf ("\nIntroduza 8 vetores: ");
    for (i=0; i<8; i++){
        scanf ("%d", &vetor[i]);
    }

    for (i=0; i<8; i++){
        if(vetor[i] % 6 == 0){
            printf ("%d --> multiplo de 6\n", vetor[i]);
            soma++;
        }
    }
    printf ("Total de numeros multiplos de 6: %d", soma);
}