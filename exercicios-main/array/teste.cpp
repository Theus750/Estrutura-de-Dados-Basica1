#include <iostream>
using namespace std;
int maiorSequenciaCrescente(const int numeros[], int tamanho) {
        if (tamanho == 0 || numeros == nullptr) {

            return 0;
        }

        int maior = 1; 
        int atual = 1;

        for(int i = 1; i < tamanho; i++){
            if (numeros[i] > numeros[i - 1]){
                atual++;
            }
            else {
                if (atual > maior){
                    maior = atual;
                }

                atual = 1;
            }

        }

        if(atual > maior) maior = atual;

    return maior;
}

main(){
    int numeros[] = {1, 2, 2, 3, 4, 1, 2, 3};
    maiorSequenciaCrescente(numeros, 8) == 3;

    return 0;
}