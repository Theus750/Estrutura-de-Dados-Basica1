int buscaBinaria(const int arr[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    while( inicio <= fim){
        (meio = inicio+fim)/2;
        if(alvo < arr[meio]){
            fim = meio -1;
        }
        else if (alvo > arr[meio]){
            inicio = meio + 1;
        }
        else return meio;
    }

    return -1;
}