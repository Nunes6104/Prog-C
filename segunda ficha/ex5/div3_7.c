#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, result, result2;

    //Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7

    printf ("Introduza um número: ");
    scanf ("%d", &num);

    result = num % 3;
    result2 = num % 7;

    if (result == 0 && result2 ==0){
        printf ("\nO valor %d é divisível por 3 e por 7", num);
    }
        else if (result ==0){
                printf ("\nO valor %d é divisível por 3", num);
        }
         
            else if (result2 == 0){
                printf ("\nO valor %d é divisível por 7", num);
            }
                else printf("\nO valor %d não é divisível por 3 nem por 7", num);

}