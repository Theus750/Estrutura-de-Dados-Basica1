#include <iostream>

int contarElementosUnicos(const int numeros[], int tamanho) {
    if(numeros == nullptr || numeros <= 0){
        return 0;
    }

    int contador = 0;

    for(int i = 0; i < tamanho; i++){
        bool flag = false;
        for(int j = 0; j<i; j++){
            if (numeros[j] == numeros[i]){
                flag = true;
                break;
            }

        }

        if (!flag){
            contador++;
        }
    }

    return contador;
}

main(){


    return;
}