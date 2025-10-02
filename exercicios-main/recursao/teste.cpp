#include <iostream>

bool verificarSequencia(int N) {
    if (N < 10) return false;

    int ultimo = N % 10;
    int penultimo = (N/10) % 10;

    if(ultimo == penultimo){return true;}
    else return verificarSequencia(N/10);
}


int main () {
    // multiplicacao(3, 4);
    // multiplicacao(0, 5);
    // multiplicacao(5, 0);
    // multiplicacao(3, 2);


    return 0;
}