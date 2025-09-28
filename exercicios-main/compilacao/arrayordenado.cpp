#include <iostream>
using namespace std;

// Função que verifica se um array está ordenado em ordem crescente
bool verificarOrdenado(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] > arr[i+1]) return false;
    }
    return true;
}

int main() {
    // Teste 1
    int arr1[] = {1, 2, 3, 4};
    int tamanho1 = 4;
    bool ordenado1 = verificarOrdenado(arr1, tamanho1);
    cout << "Teste 1 - Esperado: true, retornou: " << (ordenado1 ? "true" : "false") << endl;

    // Teste 2
    int arr2[] = {1, 2, 4, 3};
    int tamanho2 = 4;
    bool ordenado2 = verificarOrdenado(arr2, tamanho2);
    cout << "Teste 2 - Esperado: false, retornou: " << (ordenado2 ? "true" : "false") << endl;

    return 0;
}
