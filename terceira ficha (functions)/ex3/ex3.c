#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que leia o valor de um ângulo em graus e o converta,
//utilizando uma função, para radianos e ao final imprima o resultado. Veja a fórmula de cálculo a seguir.


float conversao(int angulo){
    float conversao;

    conversao = (angulo * 3.14) / 180;

    return conversao;
}


int main(){
    float angulo, radianos;

    printf ("Introduza o angulo em graus: ");
    scanf ("%f", &angulo);

    radianos = conversao(angulo);

    printf ("O angulo %.2f em radianos: %.2f", angulo, radianos);

    return 0;
}