/**
 * @copyright (c) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/**
 * @brief Rotaciona os elementos de um array para a direita por `n` posições.
 *
 * @param numeros Um array de inteiros.
 * @param tamanho O tamanho do array.
 * @param n Número de posições para rotacionar.
 */
void rotacaoArray(int numeros[], int tamanho, int n) {
    const int max = 100;
    int temp[max];
     n = n % tamanho;
    
    
    for (int i = 0; i < n; i++){
        temp[i] = numeros[tamanho -n + i];
        
    }

    
    for(int k = 0; k < tamanho - n; k++){
        temp[n + k] = numeros[k];
        
    }
    
    
    for(int k = 0; k < tamanho; k++){
       numeros[k] = temp[k]; 
    }
        
    
    return;   
}

TEST_CASE("Rotação - Teste com rotação simples") {
    int numeros[] = {1, 2, 3, 4, 5};
    rotacaoArray(numeros, 5, 1);
    CHECK(numeros[0] == 5);
    CHECK(numeros[1] == 1);
    CHECK(numeros[2] == 2);
    CHECK(numeros[3] == 3);
    CHECK(numeros[4] == 4);
}

TEST_CASE("Rotação - Teste com rotação maior que tamanho do array") {
    int numeros[] = {1, 2, 3, 4, 5};
    rotacaoArray(numeros, 5, 6);
    CHECK(numeros[0] == 5);
    CHECK(numeros[1] == 1);
    CHECK(numeros[2] == 2);
    CHECK(numeros[3] == 3);
    CHECK(numeros[4] == 4);
}

TEST_CASE("Rotação - Teste com rotação igual ao tamanho do array") {
    int numeros[] = {1, 2, 3, 4, 5};
    rotacaoArray(numeros, 5, 5);
    CHECK(numeros[0] == 1);
    CHECK(numeros[1] == 2);
    CHECK(numeros[2] == 3);
    CHECK(numeros[3] == 4);
    CHECK(numeros[4] == 5);
}

TEST_CASE("Rotação - Teste com array vazio") {
    rotacaoArray(nullptr, 0, 3);
}
