#include <stdio.h>
#include <stdlib.h>

int main(){
int num, num2, num3;

printf ("introduza um numero:");
    scanf ("%d", &num);

    (num2= num+1);
    (num3= num-1);

printf ("do numero introduzido %d\n", num);
printf ("o antecessor do numero introduzido: %d\n", num2);
printf ("o sucessor do numero introduzido: %d\n", num3);

return 0;
}