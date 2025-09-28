#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "ListaEncadeada.h"
#include <iostream>

TEST_CASE("Lista vazia")
{
    ListaEncadeada lista;

    int contagem = lista.removerTodos(7);

    std::string resultadoEsperado = "null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 0 );
}

TEST_CASE("Lista com um só elemento, mas não o removendo")
{
    ListaEncadeada lista;

    lista.inserirNoInicio(1);

    int contagem = lista.removerTodos(2);

    std::string resultadoEsperado = "1->null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 0 );
}

TEST_CASE("Lista com um só elemento, removendo-o")
{
    ListaEncadeada lista;

    lista.inserirNoInicio(1);

    int contagem = lista.removerTodos(1);

    std::string resultadoEsperado = "null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 1 );
}

TEST_CASE("Lista sem elementos repetidos, removendo o primeiro")
{
    ListaEncadeada lista;
                        
    for(auto s : {10, 8, 6, 4}) lista.inserirNoInicio( s );

    int contagem = lista.removerTodos(4);

    std::string resultadoEsperado = "6->8->10->null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 1 );
}

TEST_CASE("Lista sem elementos repetidos, removendo o último")
{
    ListaEncadeada lista;
                        
    for(auto s : {10, 8, 6, 4}) lista.inserirNoInicio( s );

    int contagem = lista.removerTodos(10);

    std::string resultadoEsperado = "4->6->8->null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 1 );
}

TEST_CASE("Lista sem elementos repetidos, removendo do meio")
{
    ListaEncadeada lista;
                        
    for(auto s : {10, 8, 6, 4}) lista.inserirNoInicio( s );

    int contagem = lista.removerTodos(8);

    std::string resultadoEsperado = "4->6->10->null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 1 );
}

TEST_CASE("Lista com elementos repetidos - Removendo primeiro")
{
    ListaEncadeada lista;
                       
    for(auto s : {10, 8, 6, 10, 6, 4, 6}) lista.inserirNoInicio( s );

    int contagem = lista.removerTodos(10);

    std::string resultadoEsperado = "6->4->6->6->8->null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 2 );
}

TEST_CASE("Lista com elementos repetidos - Removendo último")
{
    ListaEncadeada lista; 
                       
    for(auto s : {10, 8, 6, 10, 6, 4, 6}) lista.inserirNoInicio( s );

    int contagem = lista.removerTodos(6);

    std::string resultadoEsperado = "4->10->8->10->null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( resultadoRecebido == resultadoEsperado );
    REQUIRE( contagem == 3 );
}

TEST_CASE("Lista com elementos repetidos - Removendo do meio")
{
    ListaEncadeada lista;
                       
    for(auto s : {10, 8, 6, 10, 6, 4, 6}) lista.inserirNoInicio( s );

    int contagem = lista.removerTodos(8);

    std::string resultadoEsperado = "6->4->6->10->6->10->null";
    std::string resultadoRecebido = lista.imprimir();

    REQUIRE( contagem == 1 );
    REQUIRE( resultadoRecebido == resultadoEsperado );
}
