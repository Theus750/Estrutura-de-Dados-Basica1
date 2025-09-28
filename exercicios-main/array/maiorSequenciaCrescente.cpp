/**
 * @copyright (c) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/**
 * @brief Encontra o tamanho da maior sequência crescente contínua em um array de inteiros.
 *
 * @param numeros Um array de inteiros.
 * @param tamanho O tamanho do array.
 * @return O tamanho da maior sequência crescente contínua.
 */
int maiorSequenciaCrescente(const int numeros[], int tamanho) {
        if (tamanho == 0 || numeros == nullptr) {

            return 0;
        }

        int maior = 1; 
        int atual = 1;

        for(int i = 1; i < tamanho; i++){
            if (numeros[i] > numeros[i - 1]){
                atual++;
            }
            else {
                if (atual > maior){
                    maior = atual;
                }

                atual = 1;
            }

        }

        if(atual > maior) maior = atual;

    return maior;
}

TEST_CASE("Maior Sequência Crescente - Teste com elementos mistos") {
    int numeros[] = {1, 2, 2, 3, 4, 1, 2, 3};
    CHECK(maiorSequenciaCrescente(numeros, 8) == 3);
}

TEST_CASE("Maior Sequência Crescente - Teste com elementos crescentes") {
    int numeros[] = {1, 2, 3, 4, 5};
    CHECK(maiorSequenciaCrescente(numeros, 5) == 5);
}

TEST_CASE("Maior Sequência Crescente - Teste com elementos decrescentes") {
    int numeros[] = {5, 4, 3, 2, 1};
    CHECK(maiorSequenciaCrescente(numeros, 5) == 1);
}

TEST_CASE("Maior Sequência Crescente - Teste com array vazio") {
    int* numeros = nullptr;
    CHECK(maiorSequenciaCrescente(numeros, 0) == 0);
}
