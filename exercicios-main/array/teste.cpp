#include <iostream>
using namespace std;
int posicaoInserirOrdenado(const int numeros[], int tamanho, int elemento) {
    if(numeros == nullptr || tamanho == 0){
        return 0;
    }

    int posicao = 0;
    for(int i = 0; i < tamanho; i++){
        if (numeros[i] > elemento){
            posicao = i;
            break;
        }
    }

    
    return posicao;
}

main(){
    int numeros[] = {1, 3, 5, 7};
    posicaoInserirOrdenado(numeros, 4, 4);

    return 0;
}