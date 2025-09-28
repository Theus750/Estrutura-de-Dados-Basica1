#include <iostream>
using namespace std;

// Função que calcula o valor médio dos elementos de um array
double calcularMedia(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += arr[i];
    }

    
    return soma/tamanho;
}

int main() {
    // Teste 1
    int arr1[] = {10, 20, 30, 40};
    int tamanho1 = 4;
    double media1 = calcularMedia(arr1, tamanho1);
    cout << "Teste 1 - O valor esperado era 25 e retornou " << media1 << endl;

    // Teste 2
    int arr2[] = {5, 15, 25, 35};
    int tamanho2 = 4;
    double media2 = calcularMedia(arr2, tamanho2);
    cout << "Teste 2 - O valor esperado era 20 e retornou " << media2 << endl;

    return 0;
}
