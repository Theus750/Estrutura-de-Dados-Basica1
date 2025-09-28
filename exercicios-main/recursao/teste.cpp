#include <iostream>

int soma(int X, int Y) {
    if(Y == 0){
        return X;
    } else if(Y > 0){
        return soma(X + 1, Y - 1);
 } else {return soma(X - 1, Y + 1);}
}

int main () {
    soma(3, 4);
    soma(0, 5);
    soma(5, 0);
    soma(3, 6);
    soma(7, 3);


    return 0;
}