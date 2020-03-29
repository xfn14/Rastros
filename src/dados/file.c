#include "file.h"

// TODO Gravar e ler o resto do estado

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


    setTabuleiro(estado, tabuleiro);
    estado->ultima_jogada = obter_coordenada_peca(tabuleiro);

    mostrar_tabuleiro(estado);
    //printf("\n%d %d", estado->ultima_jogada.coluna, estado->ultima_jogada.linha);

    fclose(file_p);
}

void movs(ESTADO *estado){
    for(int i = 0; i < 32; i++){
        COORDENADA jogador1 = estado->jogadas[i].jogador1;
        COORDENADA jogador2 = estado->jogadas[i].jogador2;

        int jogador1_linha, jogador2_linha;
        char jogador1_coluna, jogador2_coluna;

        jogador1_linha = 8 - jogador1.linha;
        jogador2_linha = 8 - jogador2.linha;

        jogador1_coluna = 'a' + jogador1.coluna;
        jogador2_coluna = 'a' + jogador2.coluna;

        if(jogador2.linha == -1 && jogador1.linha != -1){
            printf("(%d) %c%d\n", i+1, jogador1_coluna, jogador1_linha);
        }else if(jogador1.linha != -1 && jogador2.linha != -1){
            printf("(%d) %c%d %c%d\n", i+1, jogador1_coluna, jogador1_linha, jogador2_coluna, jogador2_linha);
        }
    }
}