#include <iostream>

std::pair<int, int> menorMaiorDigito(int N) {
    if(N < 10) return std::make_pair(N,N);

    int digito_atual = N % 10;
    auto digito_restante = menorMaiorDigito(N/10);
    int menor = digito_restante.first;
    int maior = digito_restante.second;

    if(digito_atual < menor) menor = digito_atual;
    if(digito_atual > maior) maior = digito_atual;

    return std::make_pair(menor, maior);
}


int main () {
    // multiplicacao(3, 4);
    // multiplicacao(0, 5);
    // multiplicacao(5, 0);
    // multiplicacao(3, 2);


    return 0;
}