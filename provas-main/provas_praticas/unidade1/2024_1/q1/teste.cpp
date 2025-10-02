bool consecutivosIguais(int N){
    if( N < 10) return false;
    int ultimo = N%10;
    int penultimo = (N/10)%10;

    if(ultimo == penultimo) return true;
    else return consecutivosIguais(N/10);

}
    