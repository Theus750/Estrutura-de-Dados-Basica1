#include <iostream>

std::pair<int, int> somaProdutorioDigitos(int N) {
    if(N == 0)  return std::make_pair(0, 0);
    if(N < 10) return std::make_pair(N,N);
    int digito_atual = N % 10;
    auto digitos_restantes = somaProdutorioDigitos(N /10);
    int soma = digito_atual + digitos_restantes.first;
    int produto = digito_atual * digitos_restantes.second;
    
    return std::make_pair(soma, produto);
}


int main () {
    // multiplicacao(3, 4);
    // multiplicacao(0, 5);
    // multiplicacao(5, 0);
    // multiplicacao(3, 2);


    return 0;
}