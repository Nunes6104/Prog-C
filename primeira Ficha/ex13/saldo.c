#include <stdio.h>
#include <stdlib.h>

int main(){

float saldo, reajuste, final;
//Faça um programa em C que leia o saldo de uma conta poupança e mostre o novo saldo, considerando um reajuste de 2%.

printf ("Introduza o saldo da conta apoupanca:");
scanf ("%f", &saldo);

reajuste=1+0.02;
final= saldo*reajuste;

printf ("O saldo final da conta poupaca apos reajuste corresponde a: %.2f", final);

    return 0;
}