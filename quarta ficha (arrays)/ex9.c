#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que leia dois conjuntos de números inteiros, 
//tendo cada um 10 elementos. Ao final o programa deve listar os elementos comuns aos conjuntos.



void main(){
    int v1[10], v2[10], v3[10], i, j, couter=0;

    for (i=0; i<10; i++){
        printf ("Introduza os valores para o vetor 1: ");
        scanf ("%d", &v1[i]);
    }

    for (i=0; i<10; i++){
        printf ("\nIntroduza os valores para o vetor 2: ");
        scanf ("%d", &v2[i]);
    }

    for (i=0; i<10;i++){
        for (j=0; j<10;j++){
            if(v1[i]==v2[j]){
                v3[couter] = v1[i];
                couter++;
                break;
            }
        }
    }
    printf ("\nElementos comuns aos conjuntos");
    for (i=0; i<couter; i++){
        printf ("   %d", v3[i]);
    }
    
}