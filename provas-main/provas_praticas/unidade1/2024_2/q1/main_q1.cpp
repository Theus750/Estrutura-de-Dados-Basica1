#include <iostream>
#include <cassert>

using namespace std;

int contaDigito(int N, int D)
{ if(N == 0) return 0;
    int digito = N%10;
    int resto = contaDigito(N/10, D);
    if(digito == D) return 1 + resto;
    else return resto; 

    
}

int main(void)
{
    cout << "\t---\tQuestão 01: Início\t---" << endl;

    int N1 = 1234;

    assert( contaDigito(N1, 1) == 1);
    assert( contaDigito(N1, 2) == 1);
    assert( contaDigito(N1, 3) == 1);
    assert( contaDigito(N1, 4) == 1);
    assert( contaDigito(N1, 5) == 0);

    int N2 = 243434;

    assert( contaDigito(N2, 1) == 0);
    assert( contaDigito(N2, 2) == 1);
    assert( contaDigito(N2, 3) == 2);
    assert( contaDigito(N2, 4) == 3);    

    cout << "\t---\tQuestão 01: Passou em todos os testes\t---" << endl;

    return 0;
}
