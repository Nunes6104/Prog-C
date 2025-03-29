#include <stdio.h>
#include <stdlib.h>

int main(){

float num1, num2, num3, soma, media;

printf ("Introduza um numero real:");
scanf ("%f", &num1);

printf ("Introduza o segundo numero real:");
scanf ("%f", &num2);

printf ("Introduza o terceiro numero real:");
scanf ("%f", &num3);

(soma= num1+num2+num3);
(media= soma/3);


printf ("A media aritmetica dos valores introduzidos corresponde a: %.2f", media);

return 0;
}