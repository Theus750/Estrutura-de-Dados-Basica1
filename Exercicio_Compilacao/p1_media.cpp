// Nome: Matheus Marcos da Silva
// Matricula:
#include  <iostream>
#include <cstddef>

double calcular_media(const int* arr, std::size_t n){
    // Sua implementação Aqui!
    int soma = 0;

    for (std::size_t i = 0; i < n; i++) {
        soma += arr[i];
        
       
    }

    return static_cast<double> (soma) / n;
} 

int main() {
    int arr1[] = {10, 20, 30, 40};
    std::cout << "Esperando: 25, Obtido: " << calcular_media(arr1, 4) << std::endl;

    int arr2[] = {5, 15, 25, 35};
    std::cout << "Esperando: 20, Obtido:" << calcular_media(arr2, 4) << std::endl;

    int arr3[] = {-5, 5, -10, 10};
    std::cout << "Esperado: 0, obtido: " << calcular_media(arr3, 4) << std::endl;
}
