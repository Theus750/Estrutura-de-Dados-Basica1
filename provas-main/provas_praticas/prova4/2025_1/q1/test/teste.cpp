#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../lib/doctest.h"
#include "../header/PrimeiroIndice.h"

TEST_CASE("Encontrar Primeiro e Último Índice - Testes") {
    int arr1[] = {1, 2, 2, 2, 3, 4, 5};

    auto resultado = encontrarPrimeiroIndice(arr1, 7, 2);
    CHECK(resultado == 1);

    resultado = encontrarPrimeiroIndice(arr1, 7, 4);
    CHECK(resultado == 5);

    resultado = encontrarPrimeiroIndice(arr1, 7, 5);
    CHECK(resultado == 6);

    resultado = encontrarPrimeiroIndice(arr1, 7, 6);
    CHECK(resultado == -1);

    resultado = encontrarPrimeiroIndice(arr1, 7, 1);
    CHECK(resultado == 0);
}
