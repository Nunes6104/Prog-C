#include <stdio.h>
#include <stdlib.h>

void dobro();
int main(){
    int num1, num2, num3;

    printf ("Introduza o primeiro numero: ");
    scanf ("%d", &num1);

    printf ("Introduza o segundo numero: ");
    scanf ("%d", &num2);

    printf ("Introduza o terceiro numero: ");
    scanf ("%d", &num3);

    dobro(num1, num2, num3);

return 0;
}


void dobro(int num1, int num2, int num3){

printf ("\nO dobro do primeiro numero: %d", num1*2);
printf ("\nO dobro do segundo numero: %d", num2*2);
printf ("\nO dobro do terceiro numero: %d", num3*2);

}