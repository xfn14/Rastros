cmake_minimum_required(VERSION 3.15)
project(src C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnull -Wall -Wextra -pedantic-errors -0")
add_library(math STATIC dados/lista.c)
add_executable(src main.c logica/jogada.c logica/jogada.h interface/tabuleiro.c interface/tabuleiro.h dados/data.h dados/estado.c dados/estado.h interface/interpretador.c interface/interpretador.h interface/file.c interface/file.h dados/lista.c dados/lista.h logica/movs.c logica/movs.h logica/pos.c logica/pos.h dados/data.c)
target_link_libraries(src math)