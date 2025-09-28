/**
 * @copyright (c) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include <stdexcept>

/**
 * @brief Calcula o maior produto de todos os elementos do array exceto o atual.
 *
 * @param numeros Um array de inteiros.
 * @param tamanho O tamanho do array.
 * @return O maior produto possível excluindo o elemento atual.
 * @throws std::invalid_argument se o array tiver menos de 2 elementos.
 */
int maiorProdutoExcetoAtual(const int numeros[], int tamanho) {
    int maior;
    
    if(tamanho < 2){
        throw std::invalid_argument ("Array vazio ou nao possui mais de um elemento!");
    }

    const int max = 100; 
    
    int frente[max];
    int tras[max];
    int produto[max];


    frente[0] = 1;
    tras[tamanho - 1] = 1;

    for (int i = 1; i < tamanho; i++) {
        frente[i] = frente[i - 1] * numeros[i - 1];
    }


    for (int j = tamanho - 2; j >= 0; j--) {
        tras[j] = tras[j + 1] * numeros[j + 1];
    }


    for (int k = 0; k < tamanho; k++){
        produto[k] = frente[k] * tras[k];

    }

    maior = produto[0];

    for(int k = 0; k < tamanho; k++ ){
        if (produto[k] > maior) {
            maior = produto[k];
        }
    }

   
    return maior;
}

TEST_CASE("Maior Produto Exceto Atual - Teste com elementos positivos") {
    int numeros[] = {1, 2, 3, 4};
    CHECK(maiorProdutoExcetoAtual(numeros, 4) == 2*3*4);  // Todos exceto 1
}

TEST_CASE("Maior Produto Exceto Atual - Teste com elemento zero") {
    int numeros[] = {1, 2, 0, 4};
    CHECK(maiorProdutoExcetoAtual(numeros, 4) == 1*2*4);  // Todos exceto 0
}

TEST_CASE("Maior Produto Exceto Atual - Teste com elementos negativos") {
    int numeros[] = {-1, -2, -3, -4};
    CHECK(maiorProdutoExcetoAtual(numeros, 4) == -1*-2*-3);  // Todos exceto -4
}

TEST_CASE("Maior Produto Exceto Atual - Teste com array pequeno") {
    int numeros[] = {3, 4};
    CHECK(maiorProdutoExcetoAtual(numeros, 2) == 4);  // Apenas um elemento para excluir
}

TEST_CASE("Maior Produto Exceto Atual - Teste com array insuficiente") {
    int numeros[] = {5};
    CHECK_THROWS_AS(maiorProdutoExcetoAtual(numeros, 1), std::invalid_argument);
}
