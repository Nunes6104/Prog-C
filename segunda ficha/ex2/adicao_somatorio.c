#include <stdio.h>
#include <stdlib.h>

void main(){
int num1, num2, result, result1, result2;

printf ("Introduza o primeiro número: ");
scanf ("%d", &num1);

printf ("Introduza o segundo número: ");
scanf ("%d", &num2);

result = num1 + num2;

    if (result > 20){
            result1 = result + 8;
            printf ("\nO resultado obtido será %d + 8 = %d", result, result1);
    }
        else {
            result2 = result - 5;
            printf ("\nO resultado obtido será %d - 5 = %d", result, result2);
        }

}