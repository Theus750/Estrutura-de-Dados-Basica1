// Nome: Matheus Marcos da silva 
// Matricula:
#include <iostream>
#include <cstddef>

    bool esta_ordenado_nao_decrescente(const int* arr, std::size_t n){
        for(std::size_t i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true; 
    }

int main(){
    int arr1[] = {1,2,3,4};
    std::cout << "Esperado: True, Obtido: " << (esta_ordenado_nao_decrescente(arr1, 4) ? "true" : "false") << std::endl;
    int arr2[] = {1,2,4,3};
    std::cout << "Esperado: False, Obtido: " << (esta_ordenado_nao_decrescente(arr2, 4) ? "true" : "false") << std::endl;
    int arr3[] = {5,5,5,5};
    std::cout << "Esperado: True, Obtido: " << (esta_ordenado_nao_decrescente(arr3, 4) ? "true" : "false") << std::endl;
} 