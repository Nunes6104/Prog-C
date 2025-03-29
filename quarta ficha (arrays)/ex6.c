#include <stdio.h>
#include <stdlib.h>

//Construa um programa que permita armazenar o salário de 20 pessoas. 
//Calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%. 
//Imprimir uma listagem numerada com o salário e o novo salário. Declare quantos vetores forem necessários.

void main(){
    float salario[20], ajuste[20];
    int i;

    
    for (i=0; i<20; i++){
        printf ("\nIntroduza o Salário dos trabalhadores: ");
        scanf ("%f", &salario[i]);
    }

    for (i=0; i<20; i++){
        ajuste[i] = salario[i] * (1 + 0.08);
        printf ("\n%d --> O ajuste do Salário ficará: %.2f", i+1, ajuste[i]);
    }


}