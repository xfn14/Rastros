#include "file.h"

// TODO Gravar e ler o resto do estado

/**
\brief Esta função lê o Estado atual e grava o tabuleiro correspondente num ficheiro.
*/
void gr(char *file_name, ESTADO *estado){
    file_name = strcat(file_name,".txt");
    FILE *file_p;
    file_p = fopen(file_name, "w");
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            CASA cs = estado->tab[i][j];
            if(cs == POS1) fprintf(file_p, "1");
            else if(cs == POS2) fprintf(file_p, "2");
            else if(cs == RASTRO) fprintf(file_p, "#");
            else if(cs == PECA) fprintf(file_p, "*");
            else if(cs == VAZIO) fprintf(file_p, ".");
        }
        fprintf(file_p, "\n");
    }
    fclose(file_p);
}

/**
\brief Esta função lê um ficheiro e verifica o Estado do tabuleiro.
*/
void ler(char *file_name, ESTADO *estado){
    file_name = strcat(file_name,".txt");
    FILE *file_p;
    file_p = fopen(file_name, "r");
    char line[150];
    CASA tabuleiro[8][8];

    if(file_p == NULL){
        printf("Nome de ficheiro invalido");
        return;
    }

    int linha = 0;
    while(!feof(file_p)){
        fgets(line, 150, file_p);
        for(int i = 0; i < 8; i++){
            if(line[i] == '1') tabuleiro[linha][i] = POS1;
            else if(line[i] == '2') tabuleiro[linha][i] = POS2;
            else if(line[i] == '#') tabuleiro[linha][i] = RASTRO;
            else if(line[i] == '*') tabuleiro[linha][i] = PECA;
            else if(line[i] == '.') tabuleiro[linha][i] = VAZIO;
        }
        linha++;
    }

    /**
    \brief Função que recebe um estado e desenha o tabuleiro.
    */
    setTabuleiro(estado, tabuleiro);
    estado->ultima_jogada = obter_coordenada_peca(tabuleiro);
    /**
    \brief Recebe o Estado e imprime o tabuleiro para esse Estado.
    */
    mostrar_tabuleiro(estado);
    //printf("\n%d %d", estado->ultima_jogada.coluna, estado->ultima_jogada.linha);

    fclose(file_p);
}
