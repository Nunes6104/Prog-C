#include <stdio.h>
#include <stdlib.h>

//Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada.

void main(){
    char letra[10];
    int i;

    printf ("Introduza 10 letras: ");
    for (i=0; i<10; i++){
        fflush(stdin);      //takes only a single parameter which is a pointer to the File Object in which we want to flush or write our data.
        scanf("%c", &letra[i]);
    }

    printf ("\nA lista numerada das letras introduzidas: \n");
    for (i=0; i<10; i++){
        printf ("%d --> %c\n", i+1, letra[i]);

    }

}