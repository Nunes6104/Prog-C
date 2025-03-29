#include <stdio.h>
#include <stdlib.h>

//Faça um programa que verifique se
//um número é primo por meio de uma função. Ao final imprima o resultado.

int primo(int num){
    int i, aux = 0;

    for (i=1; i<=num; i++)
        if (num % i == 0)
            aux++;
    
    return aux;
}

int main(){
    int num, calc;

    printf ("\nIntroduza o numero: ");
    scanf ("%d", &num);

    calc = primo(num);

    if (calc == 2)
        printf ("\n%d --> Numero primo", num);
        
        else printf ("\n%d --> Numero nao primo", num);

return 0;
}