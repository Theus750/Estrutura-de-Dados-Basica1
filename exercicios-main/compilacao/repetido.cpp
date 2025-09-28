#include <iostream>
using namespace std;

// Função que conta elementos repetidos em um array
int contarRepetidos(int arr[], int tamanho) {
     int repetidos = 0;
     for(int i = 0; i < tamanho; i++){
        bool aparece = false;

        for(int j = 0; j < i; j++){
            if ( arr[j] == arr[i]){
                aparece = true;
                break;
            }
        }

        if (aparece) continue;
        
        int contador = 0;

        for(int k = i + 1; k < tamanho; k++){
            if (arr[i] == arr[k]){
                contador++;
            }
        
        }
        if(contador > 0) {
            repetidos++;
        }
     }
    return repetidos;
}

int main() {
    // Teste 1
    int arr1[] = {1, 2, 1, 3, 1};
    int tamanho1 = 5;
    int repetidos1 = contarRepetidos(arr1, tamanho1);
    // Apenas o 1 se repete no array
    cout << "Teste 1 - O valor esperado era 1 e retornou " << repetidos1 << endl;

    // Teste 2
    int arr2[] = {4, 5, 6, 7, 8};
    int tamanho2 = 5;
    int repetidos2 = contarRepetidos(arr2, tamanho2);
    // Nenhum se repete no array
    cout << "Teste 2 - O valor esperado era 0 e retornou " << repetidos2 << endl;

    // Teste 3
    int arr3[] = {5, 4, 2, 4, 5};
    int tamanho3 = 5;
    int repetidos3 = contarRepetidos(arr3, tamanho3);
    // Os valores 4 e 5 se repetem no array
    cout << "Teste 3 - O valor esperado era 2 e retornou " << repetidos3 << endl;

    return 0;
}
