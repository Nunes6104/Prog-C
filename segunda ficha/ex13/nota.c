#include <stdio.h>
#include <stdlib.h>

//Faça um programa que permita o nome, a nota da prova 1 e a nota da prova 2 de um aluno. 
//O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, 
//a média das notas e uma das mensagens: "Aprovado", 
//"Reprovado “ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e 
//as demais em prova final).

void main(){
    float nome[500], nota1, nota2, media; 

    printf ("Introduza o nome do aluno: ");
    fgets (nome, 500, stdin);

    printf ("Introduza a nota da primeira prova do aluno (de 0 a 20 valores): ");
    scanf ("%f", &nota1);

    printf ("Introduza a nota da segunda prova do aluno (de 0 a 20 valores): ");
    scanf ("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media <= 20 && media >=7) printf ("\nDados do Aluno:\n \nNome do Aluno: %s \nNota da primeira prova: %.2f \tNota da segunda prova: %.2f \nO Aluno foi Aprovado com a média: %.2f", nome, nota1, nota2, media);  
    else if (media < 6 && media >= 4)   printf ("\nDados do Aluno:\n \nNome do Aluno: %s \nNota da primeira prova: %.2f \tNota da segunda prova: %.2f \nO Aluno terá de ir à prova final tendo a média de: %.2f", nome, nota1, nota2, media);
        else printf ("\nDados do Aluno: \nNome do Aluno:\n %s \nNota da primeira prova: %.2f \tNota da segunda prova: %.2f \nO Aluno foi Reprovado com a média: %.2f", nome, nota1, nota2, media);

}