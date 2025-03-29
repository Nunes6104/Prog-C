#include <stdio.h>
#include <stdlib.h>

//Depois da permissão do governo para as mensalidades dos planos de saúde, 
//as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. 
//Um vendedor de um plano de saúde apresentou a tabela a seguir. 
//Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.


void main(){
    char nome[500];
    float idade, valor;

    printf ("Inroduza o seu nome primeiro nome: ");
    fgets (nome, 500 , stdin);
    
    printf ("Introduza a sua idade: ");
    scanf ("%f", &idade);

    if (idade <= 10){
         valor = 30;
    }
        else if (idade > 10 && idade <= 29){
                valor = 60;
        }
                else if (idade > 29 && idade <= 45){
                        valor = 120;
                }
                        else if (idade > 45 && idade <= 59){
                                valor = 150;
                        }
                                else if (idade > 59 && idade <= 65){
                                        valor = 250;
                                }
                                        else {
                                            valor = 400;                                      
                                        }

printf ("\nPara o(a) senhor(a) %s o plano saúde ideal a pagar é: %.2f€", nome, valor);

}