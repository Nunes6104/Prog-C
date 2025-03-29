#include <stdio.h>
#include <stdlib.h>

//Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores). 
//No final, o programa deverá imprimir quantas mercadorias proporcionam:
//lucro < 10%
//10% <= lucro <= 20%
//lucro > 20%

void main(){
    float compra[100], venda[100], lucro;
    int i, menor10=0, menor20=0, maior20=0;;

    for (i=0; i<100; i++){
        printf ("\nIntroduza o preço de compra do produto: ");
        scanf ("%f", &compra[i]);

        printf ("Introduza o preço de venda do produto: ");
        scanf ("%f", &venda[i]);
    }

    for (i=0; i<100; i++){

        lucro = (venda[i] / compra[i]) * 100;

        if (lucro < 10){
            menor10++;
        }
        else 
            if (10 <= lucro <= 20){
                menor20++;
            }
            else maior20++;
    }

    printf ("\nDas 100 mercadorias");
    printf ("\n%d tiveram lucro inferior a 10 porcento \n%d tiveram lucro maior ou igual a 10 porcento e menor ou igual a 20 porcento \n%d tiveram lucro maior que 20 porcento", menor10, menor20, maior20);

}