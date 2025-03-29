#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba as notas de três provas e calcule a média.
// Para o cálculo, escreva uma função. O programa deve imprimir a média ao final.

void media();
int main(){
    int nota1, nota2, nota3;

    printf ("Introduza a primeira nota: ");
    scanf ("%d", &nota1);

    printf ("Introduza a segunda nota: ");
    scanf ("%d", &nota2);

    printf ("Introduza a terceira nota: ");
    scanf ("%d", &nota3);

    media(nota1, nota2, nota3);

return 0;
}


void media(int nota1, int nota2, int nota3){
    int media;

    media = (nota1 + nota2 + nota3) / 3;

    printf ("A media das notas introduzidas: %d", media);
}