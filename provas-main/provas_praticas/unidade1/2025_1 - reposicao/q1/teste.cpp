int contarDigitosImpares(int N) {
    if(N == 0)return 0;

    int digito = N%10;
    int resto = contarDigitosImpares(N/10);
    if(digito % 2 != 0){
        return 1 + resto;
    }else return resto;
}