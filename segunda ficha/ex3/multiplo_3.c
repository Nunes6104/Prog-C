#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, result;

    printf ("Introduza um número: ");
    scanf ("%d", &num);

    result = num % 3;

        if (result == 0) printf ("\nO número introduzido %d é múltiplo de 3", num);
            else printf ("\nO número introduzido não é múltiplo de 3");
}