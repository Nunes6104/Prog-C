#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, result;

    printf ("Introduza um número: ");
    scanf ("%d", &num);

    result = num % 5;

    if (result == 0) printf ("\nO número %d é divisivel por 5", num);
        else printf ("\nO número %d não é divisivel por 5", num);
}