#ifndef SRC_LISTA_H
#define SRC_LISTA_H

/**
\brief Tipo de dados para os nodos
*/
typedef struct nodo {
    void *valor;
    struct nodo *proximo;
} NODO, *LISTA;

LISTA criar_lista();
int lista_esta_vazia(LISTA L);
void *devolve_cabeca(LISTA L);
LISTA proximo(LISTA L);

#endif //SRC_LISTA_H
