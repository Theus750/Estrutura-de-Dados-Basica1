void quickSort(int array[], int esquerda, int direita){
    if(esquerda >= direita) return;
    int pivo = array[direita];
    int i = esquerda, j = direita -1;
    while (i <= j){
        while( i <= j && array[i] > pivo) i++;
        while( i <= j && array[j] <= pivo) j--;

        if(i < j) std::swap(array[i], array[j]);
    }

    std::swap(array[i], array[direita]);
    
    quickSort(array, esquerda, i-1);
    quickSort(array, i+1, direita);
    
}