#include <stdio.h>
#include <stdlib.h>

//Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de venda de 30 produtos. 
//A listagem pode ser de todos os produtos ou somente de um ao se digitar o código.
    int codigo[30], quantidade[30];
    float compra[30], venda[30];

void visualize_all(){
    int i;
    for (i=0; i<30; i++){
        printf ("\n");
        printf ("\n##############   %d  ##############",i+1);
        printf ("Codigo do produto: %d   \nQuantidade desse produto: %d  \nValor de compra do produto: %.2f   \nValor de venda do produto: %.2f\n", codigo[i], quantidade[i], compra[i], venda[i]);
    }
    system("pause");
}


void especify_product(){
    int i, codigop;
    
    printf ("\nIndique o codigo do produto:");
        scanf ("%d", &codigop);

    for (i=0; i<30; i++){
        if (codigo[i] == codigop){
            printf ("\n");
            printf ("\n##############   %d  ##############",i+1);
            printf ("Codigo do produto: %d   \nQuantidade desse produto: %d  \nValor de compra do produto: %.2f   \nValor de venda do produto: %.2f\n", codigo[i], quantidade[i], compra[i], venda[i]);
            break;
        }
        else {
            printf ("Error: Codig Product not found\n");
            break;
        }
        
    }
    system("pause");
}

void main(){
    int i, option;

    system("cls");
    printf ("Introduza os dados dos produtos\n");
    for (i=0; i<30; i++){
        printf ("\n##############   %d  ##############",i+1);
        printf ("\nIntroduza o codigo do produto: ");
        scanf ("%d", &codigo[i]);

        printf ("Introduza a quantidade desse produto: ");
        scanf ("%d", &quantidade[i]);
        
        printf ("\nValor de compra do produto: ");
        scanf ("%f", &compra[i]);

        printf ("Valor de venda do produto: ");
        scanf ("%f", &venda[i]);
        printf ("\n");
    }

    printf ("\n");
    printf ("\n");
    printf("##############################################################");
    printf ("\n1- Visualizar todos os produtos \n2- Visualizar um produto especifico \n0- Exit\n");
    printf ("\nIndique a opção: ");
    scanf ("%d", &option);

    switch (option){
        do{
        case 1:
            visualize_all();
            break;
        case 2:
            especify_product();
            break;
        }while (option =! 0);
    }

}
