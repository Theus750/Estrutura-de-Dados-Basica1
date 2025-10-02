#include <utility>
// int buscaBinaria(const int arr[], int tamanho, int alvo) {
//     int inicio = 0;
//     int fim = tamanho - 1;
//     int meio;
//     while( inicio <= fim){
//         (meio = inicio+fim)/2;
//         if(alvo < arr[meio]){
//             fim = meio -1;
//         }
//         else if (alvo > arr[meio]){
//             inicio = meio + 1;
//         }
//         else return meio;
//     }

//     return -1;
// }

std::pair<int, int> encontrarPrimeiroUltimoIndice(const int arr[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    int primeiro = -1, segundo = -1;
    while( inicio <= fim){
        meio = (inicio+fim)/2;
        if(alvo == arr[meio]){
            fim = meio -1;
            primeiro == meio;   
    }else if (arr[meio] < alvo){
        inicio = meio + 1;
    }else fim = meio - 1;

}


    while (inicio <= fim){
        meio = (inicio+fim)/2;
        if (alvo == arr[meio]){
            segundo =  arr[meio];
            inicio = meio + 1;
        }else if (arr[meio] < alvo){
            inicio = meio + 1;
        }else fim = meio -1;
    }
    
    return std::make_pair(primeiro, segundo);

}
