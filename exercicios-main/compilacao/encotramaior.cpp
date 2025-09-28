#include <iostream>
using namespace std;

// Função que encontra o maior elemento em um array
int encontrarMaior(int arr[], int tamanho) {
    int maior = 0;
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int main() {
    // Teste 1
    int arr1[] = {10, 20, 5, 15, 30};
    int tamanho1 = 5;
    int resultado1 = encontrarMaior(arr1, tamanho1);
    cout << "Teste 1 - Maior esperado: 30, retornou: " << resultado1 << endl;

    // Teste 2
    int arr2[] = {50, 40, 60, 70, 20};
    int tamanho2 = 5;
    int resultado2 = encontrarMaior(arr2, tamanho2);
    cout << "Teste 2 - Maior esperado: 70, retornou: " << resultado2 << endl;

    return 0;
}
