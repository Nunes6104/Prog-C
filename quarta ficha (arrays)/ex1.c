#include <stdio.h>
#include <stdlib.h>

//Faça um programa em C que armazene 15 números inteiros num vetor e depois permita que o utilizador digite 
//um número inteiro para ser pesquisado no vetor, se for encontrado o programa deve imprimir a posição desse número no vetor, 
//caso contrário, deve imprimir a mensagem: "Não encontrado!".


void main(){
    int vetor[14], num, i, aux = 0;

    printf ("\nDigite 15 digidos: ");

    for (i=0; i<15; i++){
        scanf ("%d", &vetor[i]);
    }


    printf ("\n\nDigite o valor do vetor que procura: ");
    scanf ("%d", &num);

    for (i=0; i<15; i++){
        if (vetor[i] == num){
            printf ("\nO vetor procurado encontra-se na posição: %d", i+1);
            aux = 1;
            break;
        }

    if (aux == 0){
        printf ("\nO valor do vetor         Não encontrado!");
    }
    }
}
//nao deu printf quando vetor nao encontrado