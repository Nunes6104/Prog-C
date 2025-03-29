#include <stdio.h>
#include <stdlib.h>

//Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. 
//Calcule e armazene a média arredondada. Armazene também a situação do aluno: 
//1-Aprovado ou 2-Reprovado. No final o programa deve imprimir uma listagem contendo as notas, 
//a média e a situação de cada aluno em formato tabulado.
//Utilize quantos vetores forem necessários para armazenar os dados.

void main(){
    int alunos[15], i;
    float media[15], notas1[15], notas2[15];

    printf ("Introduza as notas dos 15 alunos de 0 a 20\n");
    for (i=0; i<15; i++) {
        printf("\nDigite a nota da primeira prova do aluno: \n");
        scanf("%f", &notas1[i]);
        
        printf("\nDigite a nota da segunda prova do aluno: \n");
        scanf("%f", &notas2[i]);

        media[i] = (notas1[i] + notas2[i]) / 2;
    }

    for (i=0; i<15; i++){
        printf ("\n%d --> primeira prova: %.2f \t segunda prova: %.2f \t media final: %.2f", i+1, notas1[i], notas2[i], media[i]);
        
        if (media[i] < 10){
            printf ("\nAluno Reprovado!\n");
        }
        else printf ("\nAluno Aprovado!\n");
    }

}