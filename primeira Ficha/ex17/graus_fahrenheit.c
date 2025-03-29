#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit.
//Para isso, leia o valor em centígrados e calcule com base na fórmula F= (9*C+160) / 5. Após calcular o programa deve mostrar o resultado da conversão.
//Em que:
// F = Graus em Fahrenheit
// C = Graus centígrados


int main(){
    float graus, fahrenheit;

    printf ("Introduza a temperatura em Graus Centigrados:");
    scanf ("%f", &graus);

    fahrenheit = (9*graus + 160)/5;
    
    printf ("A temperatura em graus Fahrenheit: %.2f \nA temperatura em graus Centigrados: %.2f", fahrenheit, graus);

    return 0;
}