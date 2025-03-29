#include <stdio.h>
#include <stdlib.h>

char nome[30][50];
int numero[30];
int nota[30];
int indice=0;

void inserir_aluno(){
    if (indice<30){ // testar fim do array
        printf("introduza o número:");
        scanf("%d",&numero[indice]);
        fflush(stdin);// limpar o buffer de input 
        printf("Introduza o nome:");
        fgets(nome[indice],50,stdin);
        printf("Introduza a nota:");
        scanf("%d",&nota[indice]);

        indice++;
    }
    else
        printf("ERRO: atingiu o limite dos 30 alunos");
}

void mostrar_alunos(){
    for(int i=0;i<indice;i++){
        printf("\nNome do aluno:%s",nome[i]);
        printf("Número do aluno:%d\n",numero[i]);
        printf("Nota do aluno:%d\n",nota[i]);
    }
    system("pause");
}

void pesquisar_aluno(){
    int num_aluno;
    int encontrou=0; // flag para assinalar se encontrou o número; 0-não encontrou 1-encontrou

    printf("Introduza o número de aluno a pesquisar:");
    scanf("%d",&num_aluno);
    for(int i=0;i<indice;i++){
        if(numero[i]==num_aluno){
            printf("Nome do aluno:%s",nome[i]);
            printf("Número do aluno:%d\n",numero[i]);
            printf("Nota do aluno:%d\n",nota[i]);
            encontrou=1;
        }
    }
    if(encontrou==0){
        printf("Número do aluno %d não existe!!!\n",num_aluno);
    }
    system("pause");
}

void  estatistica(){
    int menor,maior;
    float soma, media;

    soma=0;
    maior=0;
    menor=20;
    for(int i=0;i<indice;i++){
        if(nota[i]<menor){ //pesquisar a menor nota
            menor=nota[i];
        }
        if(nota[i]>maior){ //pesquisar  a maior nota
            maior=nota[i];
        }
        soma=soma+nota[i]; //somar as notas para calculo da média
    }
    media=soma/indice; //media = soma das notas a dividir pelo indice (que tem o número de alunos)
    printf("O número de alunos é:%d\n",indice);
    printf("A maior nota é:%d\n",maior);
    printf("A menor nota é:%d\n",menor);
    printf("A média das notas é:%.2f\n",media);
    system("pause");
}

void histograma(){
    for(int i=0;i<indice;i++){ //listar nota para todos os alunos
        printf("%d:\t",nota[i]);
        for(int j=0;j<nota[i];j++){ //mostrar tantos "#" quantos a nota dos aluno
            printf("#");
        }
        printf("\n");
    }
    system("pause");
}
void main(){
    int opcao;
    do{
        system("cls");  //limpa o terminal
        printf("1-Inserir Aluno\n");
        printf("2-Mostrar todos os alunos\n");
        printf("3-Pesquisar Aluno\n");
        printf("4-Estatística\n");
        printf("5-Histograma\n");
        printf("0-Sair\n");
        printf("Escolha a Opção:");
        scanf("%d",&opcao);

        switch (opcao){
        case 1:
            inserir_aluno();
            break;
        case 2:
            mostrar_alunos();
            break;
        case 3:
            pesquisar_aluno();
            break;
        case 4:
            estatistica();
            break;
        case 5:
            histograma();
            break;
        }

    }while(opcao!=0);
}