#include <stdio.h>
#include <stdlib.h>


//Faça um programa em C que calcule a quantidade de litros de combustível consumidos numa viagem,
//sabendo-se que o carro tem autonomia de 12 km por litro de combustível. 
//O programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:
//D= T *V
//L= D/12
//Em que:
// D = Distância percorrida em horas
// T = Tempo decorrido
// V = Velocidade média
// L = Litros de combustível consumidos
//No final, o programa deverá mostrar a distância percorrida e a quantidade de litros consumidos na viagem.

int main(){
    float distancia, tempo, velocidade, litros,velomed; 

    printf ("Introduza o tempo decorrido da viagem em horas:");
    scanf ("%f", &tempo);
    printf ("Introduza a velocidade media da viagem:");
    scanf ("%f", &velomed);

        //calcular distancia percorrida
        //distancia = vm * tempo
        distancia = velomed * tempo;

        //Litros consomidos na viagem
        //Lconsumidos = distancia/12
        litros = distancia/12;

    printf ("A distancia percorrida pelo carro corresponde a: %.2f \nA quantidade de litros consumidos na viagem serao: %.2f", distancia, litros);

    return 0;
}