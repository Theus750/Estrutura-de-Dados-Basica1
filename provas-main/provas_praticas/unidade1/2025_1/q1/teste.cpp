int menorDigito(int N){ 
    if(N < 10) return N;

    int digito = N %10;
    int resto = menorDigito(N/10);

    if(resto < digito){
        return resto;
    }else resto;
   
}