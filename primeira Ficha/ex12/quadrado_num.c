#include <stdio.h>
#include <stdlib.h>


int main(){

float num, quadrado;

printf ("Introdiza um numero real:");
scanf ("%f", &num);

quadrado= num*num;

printf ("O quadrado do numero obtido sera: %.2f", quadrado);

return 0;

}