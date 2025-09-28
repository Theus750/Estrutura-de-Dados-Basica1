#include <iostream>
using namespace std;
int contarElementosComuns(const int array1[], int tamanho1, const int array2[], int tamanho2) {
    if (tamanho1 == 0 || tamanho2 == 0 || array1 == nullptr|| array2  == nullptr){
        return 0;
     }
    
    
    int contador = 0;
    
    for(int i = 0; i < tamanho1; i++){
        for (int j = 0; j < tamanho2; j++){
            if(array1[i] == array2[j]){
                contador++;
                break;
            }

        }


    }

    cout << contador;
    return contador;
}

main(){
    int array1[] = {1, 2, 3, 4};
    int array2[] = {3, 4, 5, 6};
    contarElementosComuns(array1, 4, array2, 4);

    return 0;
}