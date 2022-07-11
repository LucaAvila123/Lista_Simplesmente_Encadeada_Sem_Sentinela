#ifndef LISTA_H
#define LISTA_H

typedef struct lista Lista;

Lista* inicLista();
//não consegui fazer uma função de inserir usando void
Lista* insere(Lista* lista, int n);

void retira(Lista* lista, int n);

void imprime(Lista* lista);

void deleta(Lista* lista);

#endif