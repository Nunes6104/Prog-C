#include <stdio.h>
#include <stdlib.h>


//Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira
// e imprimir o novo saldo após o reajuste. O cálculo deve ser feito por uma função.

void salarionov(int salario, float ajuste);
int main(){
    int salario;
    float ajuste;

    printf ("Introduza o salario: ");
    scanf ("%d", &salario);

    printf ("Introduza o ajuste em percentagem: ");
    scanf ("%f", &ajuste);

    salarionov(salario, ajuste);

return 0;
}


void salarionov(int salario, float ajuste){
    float reajuste;

    reajuste = salario + (salario * (ajuste / 100));

    printf ("\nO salario apos o reajuste sera --> %.2f €", reajuste);

}