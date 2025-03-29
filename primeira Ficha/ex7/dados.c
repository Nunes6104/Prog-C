#include <stdio.h>
#include <stdlib.h>

void main(){
char nome[50], endr[100], tel[15];

printf ("indique o nome de utilizador: ");
    fgets (nome, 50, stdin);

printf ("indique o endereco de utilizador: ");
    fgets (endr, 100, stdin);

printf ("indique o numero telefonico: ");
    fgets (tel, 15, stdin);

printf ("\no nome de utilizador inserido: %s \no endereco do utilizador inserido: %s \no numero telefonico do utilizador: %s", nome, endr, tel);

}