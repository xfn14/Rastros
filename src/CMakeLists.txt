cmake_minimum_required(VERSION 3.15)
project(src C)

set(CMAKE_C_STANDARD 99)

add_executable(src main.c logica/jogada.c logica/jogada.h interface/tabuleiro.c interface/tabuleiro.h dados/data.h dados/estado.c dados/estado.h interface/interpretador.c interface/interpretador.h interface/file.c interface/file.h "listas ligadas/lista.c" "listas ligadas/lista.h")