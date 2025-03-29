#include <stdio.h>
#include <stdlib.h>

void main(){
int num1, num2, result;

printf ("Introduza o primeiro número: ");
scanf ("%d", &num1);

printf ("Introduza o segundo número: ");
scanf ("%d", &num2);

    result = num1 + num2;

    if (result > 10){
        printf ("A soma dos números %d e %d é igual a %d", num1, num2, result);
    }
                    else
                            printf ("\nError \nA soma dos valores é inferior a 10");
                         
                    

}