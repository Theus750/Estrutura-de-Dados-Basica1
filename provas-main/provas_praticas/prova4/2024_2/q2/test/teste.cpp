#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "doctest.h"
#include "DadosEntrada.h"
#include "QuickSort.h"
#include <iostream>

bool estaDecrescente(int [], int);

TEST_CASE("Ordenação de um array pequeno") 
{
    int t1 = sizeof(arrayPequeno) / sizeof(int);

    std::cout << t1 << std::endl;

    quickSort(arrayPequeno, 0, t1-1); // arrayPequeno é definido dentro de DadosEntrada.h

    CHECK( estaDecrescente(arrayPequeno, t1) );
}

TEST_CASE("Ordenação de um array grande") 
{
    int t1 = sizeof(arrayGrande) / sizeof(int);

    std::cout << t1 << std::endl;

    quickSort(arrayGrande, 0, t1-1); // arrayPequeno é definido dentro de DadosEntrada.h

    CHECK( estaDecrescente(arrayGrande, t1) );
}

TEST_CASE("Ordenação de um array já ordenado") 
{
    int t1 = sizeof(arrayOrdenado) / sizeof(int);

    std::cout << t1 << std::endl;

    quickSort(arrayOrdenado, 0, t1-1); // arrayPequeno é definido dentro de DadosEntrada.h

    CHECK( estaDecrescente(arrayOrdenado, t1) );
}

/**
 * Esta é uma função auxiliar que eu criei para poder testar se sua ordenação está correta. Não altere-a.
*/
bool estaDecrescente(int array[], int tamanho)
{
    for(int i = 0; i < tamanho-1; i++)
    {
        if( array[i] < array[i+1] )
        {
            return false;
        }
    }

    return true;
}
