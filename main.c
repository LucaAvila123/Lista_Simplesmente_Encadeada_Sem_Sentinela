#include "lista.h"
#include <stdio.h>

int main(){
    Lista* listaTeste = inicLista();

    listaTeste = insere(listaTeste, 6);
    listaTeste = insere(listaTeste, 10);
    listaTeste = insere(listaTeste, 9);
    listaTeste = insere(listaTeste, 0);
    listaTeste = insere(listaTeste, 30);

    imprime(listaTeste);

    retira(listaTeste, 10);
    retira(listaTeste, 0);
    retira(listaTeste, 1);
    printf("\n");
    imprime(listaTeste);

    deleta(listaTeste);
    return 0;
}