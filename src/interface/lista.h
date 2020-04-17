#ifndef SRC_LISTA_H
#define SRC_LISTA_H

#include "stdio.h"
#include "stdlib.h"
#include "../dados/data.h"
#include "interpretador.h"

typedef struct nodo {
    void *valor;
    struct nodo *proximo;
} NODO, *LISTA;

// Cria uma lista vazia
LISTA criar_lista();

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor);

// Devolve a cabeça da lista
void *devolve_cabeca(LISTA L);

// Devolve a cauda da lista
LISTA proximo(LISTA L);

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L);

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L);

void jog(ESTADO *estado);

#endif //SRC_LISTA_H
