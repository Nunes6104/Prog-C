#include <stdio.h>
#include <stdlib.h>

//A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. 
//Faça um programa em C que receba a idade de um nadador e imprima a sua categoria segundo a tabela

void main(){
    int idade;

    printf ("Introduza o sua idade: ");
    scanf ("%d", &idade);

    if (idade >= 5 && idade <= 7) printf ("\nA sua categoria corresponde a: Infantil A");
        else if (idade >= 8 && idade <= 10) printf ("\nA sua categoria corresponde a: Infantil B");
                else if (idade >= 11 && idade <= 13) printf ("\nA sua categoria corresponde a: Juvenil A");
                        else if (idade >= 14 && idade <= 17) printf ("\nA sua categoria corresponde a: Jvenil B");
                                else if (idade >= 18) printf ("\nA sua categoria corresponde a: Sénior");
                                        else printf ("\nError \nVolte a introduzir a sua idade");

}