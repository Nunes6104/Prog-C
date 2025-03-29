#include <stdio.h>
#include <stdlib.h>

// Faça um programa em C que leia três números inteiros e imprima os três em ordem crescente.
// duvida
void main(){
     int num1, num2, num3;

     printf("Introduza o primeiro número: ");
     scanf("%d", &num1);

     printf("Introduza o segundo número: ");
     scanf("%d", &num2);

     printf("Introduza o terceiro número: ");
     scanf("%d", &num3);

     if ((num1 < num2) && (num2 < num3)){
          printf("A ordem os três números será: %d < %d < %d", num1, num2, num3);
     }
     else if ((num1 < num3) && (num3 < num2)){
          printf("A ordem os três números será: %d < %d < %d", num1, num3, num2);
     }
     else if ((num2 < num1) && (num1 < num3)){
          printf("A ordem os três números será: %d < %d < %d", num2, num1, num3);
     }
     else if ((num2 < num3) && (num3 < num1)){
          printf("A ordem os três números será: %d < %d < %d", num2, num3, num1);
     }
     else if ((num3 < num1) && (num1 < num2)){
          printf("A ordem os três números será: %d < %d < %d", num3, num1, num2);
     }
     else
       printf("A ordem os três números será: %d < %d < %d", num3, num2, num1);
}