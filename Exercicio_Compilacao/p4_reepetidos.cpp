// Nome: Matheus Marcos da Silva
// Matricula:
#include <iostream>
#include <cstddef>
#include <unordered_map>

std::size_t contar_valores_repetidos(const int* arr, std::size_t n) {
    if (n == 0) return 0;

    std::unordered_map<int, int> contagem;

    for (std::size_t i = 0; i < n; i++) {
        contagem[arr[i]]++;
    }

    std::size_t repetidos = 0;

     for (const auto& par : contagem) {
        if (par.second >= 2) {
            repetidos++;
        }
    }

    return repetidos;


}

int main() {
    int arr1[] = {1,2,1,3,1};
    std::cout << "Esperado: 1, Obtido: " << contar_valores_repetidos(arr1, 5) << std::endl;
    int arr2[] = {4,5,6,7,8};
    std::cout << "Esperado: 0, Obtido: " << contar_valores_repetidos(arr2, 5) << std::endl;
    int arr3[] = {5,4,2,4,5};
    std::cout << "Esperado: 2, Obtido: " << contar_valores_repetidos(arr3, 5) << std::endl;
    int arr4[] = {10,10,30,20,30,20,50,100};
    std::cout << "Esperado: 3, Obtido: " << contar_valores_repetidos(arr4, 8) << std::endl;
}