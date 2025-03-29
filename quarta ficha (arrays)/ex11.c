#include <stdio.h>
#include <stdlib.h>

//Construa um programa que leia dados para um vetor de 100 elementos inteiros.
//Imprimir o maior e o menor, sem ordenar, a percentagem de números pares e a média dos elementos do vetor.
int i, menu, menu1, nv=1, vetor[100], maior, menor, par=0, impar=0, media=0;

void maiorexe(){
    printf ("\n\n############    O Maior vetor encontrado    ############");
    
    maior = vetor[0];
    for (i=0; i<100; i++){
        if(vetor[i] > maior){
           maior =  vetor[i];
        }
    }
    printf ("\nMaior vetor: %d\n", maior);


    printf ("\n1- Voltar ao menu  \t0- Exit");
    printf ("\n\nSelecione a opção: ");
    scanf ("%d", &menu1);

    switch (menu1){
        do{
            case 1:
                menuopt();
                break;
        }while (menu =! 0);
    }
}


void menorexe(){
    printf ("\n\n############    O Menor vetor encontrado    ############");
    
    menor = vetor[0];
    for (i=0; i<100; i++){
        if(vetor[i] < menor){
           menor =  vetor[i];
        }
    }
    printf ("\nMenor vetor: %d\n", menor);


    printf ("\n1- Voltar ao menu  \t0- Exit");
    printf ("\n\nSelecione a opção: ");
    scanf ("%d", &menu1);

    switch (menu1){
        do{
            case 1:
                menuopt();
                break;
        }while (menu =! 0);
    }
}


void percentagemexe(){
    printf ("\n\n############    Percentagem de Vetores Pares e Impares    ############");
    
    for (i=0; i<100; i++){
        if(vetor[i] % 2 == 0){
           par++;
        }
        else impar++;
    }

    printf ("\nPercentagem de numeros Pares: %d porcento", par);

    printf ("\nPercentagem de numeros Impares: %d porcento", impar);


    printf ("\n1- Voltar ao menu  \t0- Exit");
    printf ("\n\nSelecione a opção: ");
    scanf ("%d", &menu1);

    switch (menu1){
        do{
            case 1:
                menuopt();
                break;
        }while (menu =! 0);
    }
}

void mediaexe(){
    printf ("\n\n############    A Media dos vetores    ############");
    for (i=0; i<100; i++){
        media += vetor[i];
    }
    media /= 100;
    printf ("\nA media dos vetores: %d\n", media);


    printf ("\n1- Voltar ao menu  \t0- Exit");
    printf ("\n\nSelecione a opção: ");
    scanf ("%d", &menu1);

    switch (menu1){
        do{
            case 1:
                menuopt();
                break;
        }while (menu =! 0);
    }
}


void menuopt(){
    printf ("\n\n\n############   Menu    ############");
    printf ("\n1- Verificar o maior vetor \t2- Verificar o menor vetor    \t3- Percentagem de numeros pares e impares \t4- Media dos elementos do Vetor   \t0- Exit");
    printf ("\nIntroduza a Opção: ");
    scanf ("%d", &menu);

    switch (menu){
        do{
            case 1: 
                maiorexe(); 
                break;
            case 2:
                menorexe();
                break;
            case 3:
                percentagemexe();
                break;
            case 4:
                mediaexe();
                break;
        }while (menu =!0);
    }
}

void main(){

    system ("cls");
    for (i=0; i<100; i++){
        printf ("\nIntroduza o vetor %d: ", nv+i);
        scanf ("%d", &vetor[i]);
    }

    menuopt();
}
