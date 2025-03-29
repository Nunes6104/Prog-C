#include <stdio.h>
#include <stdlib.h>

void main (){

//Faça um programa em C que leia a base e a altura de um retângulo e mostre o perímetro 2*(base + altura) e a área (base * altura)

float base, basep, altura, alturap, perimetro;

printf ("Introduza a base do retangulo:");
scanf ("%f", &base);

    basep= base*2;

printf ("Introduza a altura do retangulo:");
scanf ("%f", &altura);
    alturap= altura*2;

perimetro= alturap+basep;

printf ("O perimetro do retangulo: %.2f", perimetro);


}