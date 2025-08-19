// Nome: Matheus Marcos da silva
// Matricula:
#include <iostream>
#include <cstddef>

int encontrar_maior(const int* arr, std::size_t n) {
    int Maior_numero = arr[0];

    for(std::size_t i = 0; i < n; i ++ ) {
        if (Maior_numero < arr[i]) {
            Maior_numero = arr[i];
        }

    }
    return Maior_numero;
}


int main() {
    int arr1[] = {10, 20, 5, 15, 30};
    std::cout << "Esperado: 30, Obtido: " << encontrar_maior(arr1, 5) << std::endl;
    
    int arr2[] = {50, 40, 60, 70, 20};
    std::cout << "Esperado: 70, Obtido: " << encontrar_maior(arr2, 5) << std::endl;
    
    int arr3[] = {-10, -50, -3, -4};
    std::cout << "Esperado: -3, Obtido: " << encontrar_maior(arr3, 4) << std::endl;

}