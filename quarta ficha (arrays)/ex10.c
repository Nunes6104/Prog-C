#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w cujos componentes são os fatoriais dos respetivos componentes de vet.


void main(){
    int nv=1, vet[10], w[10], i, j, aux=0;

    system("cls");
    for (i=0; i<10; i++){

        printf ("Introduza o vetor %d: ", nv+i);
        scanf ("%d", &vet[i]);
    }

    for (i=0; i<10; i++){
        aux=1;
        if (vet[i] == w[i]){
            w[i] = 1;
        }    
            else{
                for (j=0; j<vet[i]; j++){
                    aux *= j+1;
                }
                w[i]= aux;
            }
    }

    for (i=0; i<10; i++){
        printf ("\nVetor Numero: %d \tFatorial: %d\n", vet[i], w[i]);
    }
}