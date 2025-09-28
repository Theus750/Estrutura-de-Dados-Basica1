#include <iostream>

int multiplicacao(int X, int Y) {
    if(X == 0 || Y == 0) return 0;
    if(Y = 0){
        return X;
    }else if(Y > 0){
        return X + multiplicacao(X, Y -1);
    }else {return - multiplicacao(X, -Y);}
}

int main () {
    multiplicacao(3, 4);
    multiplicacao(0, 5);
    multiplicacao(5, 0);
    multiplicacao(3, 2);


    return 0;
}