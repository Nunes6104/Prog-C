#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça um programa que leia a base e a altura de um retângulo e imprima o perímetro, a área e a diagonal.
//Para fazer os cálculos, implemente três funções,
//cada uma deve realizar um cálculo específico conforme solicitado. Utilize as fórmulas a seguir.

void perimetro();
void area();
double diagonal();
void main(){
    int base, altura;
    
    printf ("Introduza a base do retangulo: ");
    scanf ("%d", &base);

    printf ("Introduza a altura do retangulo: ");
    scanf ("%d", &altura);

    perimetro(base, altura);
    area(base, altura);
    diagonal(base, altura);
}


void perimetro(int base, int altura){

    printf ("\nO perimetro do retangulo --> %d", (base + altura)*2);
}

void area(int base, int altura){

    printf ("\nA area do retangulo --> %d", base * altura);
}

double diagonal(int base, int altura){

    printf ("\nA diagonal do retangulo --> %.2f", sqrt((base * base) + (altura * altura)));
}