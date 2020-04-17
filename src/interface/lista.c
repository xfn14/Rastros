#include "lista.h"

// Cria uma lista vazia
LISTA criar_lista(){
    LISTA lista1 = malloc(sizeof(NODO));
    lista1->valor = NULL;
    return lista1;
}

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor){
    LISTA head = malloc(sizeof(NODO));
    head->valor = valor;
    head->proximo = L;
    return head;
}

// Devolve a cabeça da lista
void *devolve_cabeca(LISTA L){
    return L->valor;
}

// Devolve a cauda da lista
LISTA proximo(LISTA L){
    return L->proximo;
}

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L){
    free(L->valor);
    return L->proximo;
}

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L){
    return L->valor == NULL;
}

void jog(ESTADO *estado){
    LISTA L = criar_lista();
    char linha[BUF_SIZE];

    printf("Insira várias linhas, acabando com CTRL-D:\n");

    // control-D é a tecla CTRL e a tecla D ao mesmo tempo
    // Em windows é capaz de ser CTRL-Z
    while(fgets(linha, BUF_SIZE, stdin) != 0) {
        // A função strdup cria uma cópia da string que foi lida
        // Insere uma cópia da linha lida na cabeça da lista
        L = insere_cabeca(L, strdup(linha));
    }

    printf("\n==============================\n");
    printf(  "=          PERCURSO          =\n");
    printf(  "==============================\n\n");
    // percorre sem remover os elementos da lista
    for(LISTA T = L; !lista_esta_vazia(T); T = proximo(T)) {
        // Vai buscar a cabeça da lista
        // Passa do tipo genérico void * para char *
        char *str = (char *) devolve_cabeca(T);
        printf("%s", str);
    }

    printf("\n==============================\n");
    printf(  "=           REMOCAO          =\n");
    printf(  "==============================\n\n");
    // percorre e vai removendo a cabeça
    while(!lista_esta_vazia(L)) {
        char *str = (char *) devolve_cabeca(L);
        L = remove_cabeca(L);
        printf("%s", str);
        free(str);
    }
}