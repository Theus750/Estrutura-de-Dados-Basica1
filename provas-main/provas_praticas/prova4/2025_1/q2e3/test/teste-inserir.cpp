#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../lib/doctest.h"
#include "../header/Lista.h"
#include <string>
#include <vector>

TEST_CASE("1. Inserção em lista vazia") {
    Lista lista;
    CHECK(lista.inserirOrdenadoSemRepeticao("m") == true);
    CHECK(lista.tamanho() == 1);
    CHECK(lista.primeiroElemento() == "m");
    CHECK(lista.ultimoElemento() == "m");
    CHECK(lista.imprimir() == "{m}");
    CHECK(lista.checarConsistencia() == StatusLista::OK);
}

TEST_CASE("2. Inserção no início da lista") {
    Lista lista;
    
    // Insere em lista vazia
    CHECK(lista.inserirOrdenadoSemRepeticao("e") == true);

    // Insere antes de "e"
    CHECK(lista.inserirOrdenadoSemRepeticao("c") == true);

    // Insere antes de "c"
    CHECK(lista.inserirOrdenadoSemRepeticao("a") == true);

    CHECK(lista.primeiroElemento() == "a");
    CHECK(lista.ultimoElemento() == "e");
    CHECK(lista.tamanho() == 3);
    CHECK(lista.imprimir() == "{a, c, e}");
    CHECK(lista.checarConsistencia() == StatusLista::OK);
}

TEST_CASE("3. Inserção no meio da lista") {
    Lista lista;

    CHECK(lista.inserirOrdenadoSemRepeticao("a") == true);
    CHECK(lista.inserirOrdenadoSemRepeticao("c") == true);
    CHECK(lista.inserirOrdenadoSemRepeticao("e") == true);
    
    // inserir entre o "a" e o "c"
    CHECK(lista.inserirOrdenadoSemRepeticao("b") == true);
    
    CHECK(lista.tamanho() == 4);
    CHECK(lista.primeiroElemento() == "a");
    CHECK(lista.ultimoElemento() == "e");
    CHECK(lista.imprimir() == "{a, b, c, e}");
    CHECK(lista.checarConsistencia() == StatusLista::OK);
}

TEST_CASE("4. Inserção no final da lista") {
    Lista lista;

    CHECK(lista.inserirOrdenadoSemRepeticao("a") == true);
    CHECK(lista.inserirOrdenadoSemRepeticao("b") == true);
    CHECK(lista.inserirOrdenadoSemRepeticao("c") == true);

    // Inserir após o "c"
    CHECK(lista.inserirOrdenadoSemRepeticao("d") == true);

    CHECK(lista.ultimoElemento() == "d");
    CHECK(lista.tamanho() == 4);
    CHECK(lista.imprimir() == "{a, b, c, d}");
    CHECK(lista.checarConsistencia() == StatusLista::OK);
}

TEST_CASE("5. Tentativa de inserção de duplicata") {
    Lista lista;
    CHECK(lista.inserirOrdenadoSemRepeticao("a") == true);
    CHECK(lista.inserirOrdenadoSemRepeticao("b") == true);
    CHECK(lista.inserirOrdenadoSemRepeticao("c") == true);
    CHECK(lista.inserirOrdenadoSemRepeticao("d") == true);

    CHECK(lista.imprimir() == "{a, b, c, d}");

    // duplicata no início
    CHECK(lista.inserirOrdenadoSemRepeticao("a") == false);

    // duplicata no meio
    CHECK(lista.inserirOrdenadoSemRepeticao("b") == false);

    // duplicata no meio
    CHECK(lista.inserirOrdenadoSemRepeticao("c") == false);

    // duplicata no fim
    CHECK(lista.inserirOrdenadoSemRepeticao("d") == false);

    CHECK(lista.tamanho() == 4);
    CHECK(lista.primeiroElemento() == "a");
    CHECK(lista.ultimoElemento() == "d");
    CHECK(lista.imprimir() == "{a, b, c, d}");
    CHECK(lista.checarConsistencia() == StatusLista::OK);
}
