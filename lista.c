#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct lista{
    int n;
    Lista* prox;
};
//declara lista vazia
Lista* inicLista(){
    Lista* lista = NULL;
    return lista;
}

Lista* insere(Lista* lista, int n){
    Lista* node = (Lista*) malloc (sizeof(Lista));

    node -> n = n;
    node -> prox = lista;
    lista = node;

    return lista;
}

void imprime(Lista* lista){
    Lista* p = lista;

    while(p != NULL){
        printf("%d\n", p -> n);
        p = p -> prox;
    }
}

void retira(Lista* lista, int n){
    Lista* p = lista;
    Lista* ant = NULL;
    while(p != NULL && p -> n != n){
        ant = p;
        p = p -> prox;
    }

    if(p == NULL) return;
    ant -> prox = p -> prox;
    free(p);
}

void deleta(Lista* lista){
    Lista* p = lista;
    Lista* temp = NULL;
    while(p != NULL){
        temp = p -> prox;
        free(p);
        p = temp;
    }
}