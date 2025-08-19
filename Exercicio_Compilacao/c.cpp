#include <iostream>
using namespace std;

int main() {
    int numeros[] = {1, 2, 3, 4, 5}; // array de exemplo
    int tamanho = sizeof(numeros);
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i]; // acumula os valores
    }

    cout << "A soma dos elementos é: " << tamanho << endl;
    return 0;
} 
