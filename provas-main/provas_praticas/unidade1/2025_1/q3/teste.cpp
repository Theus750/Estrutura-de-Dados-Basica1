int posicaoInsercao(int array[], int esquerda, int direita, int alvo) {
    if(esquerda > direita) return -1;
    int meio = (esquerda+direita)/2;
    if(array[meio] < alvo) return posicaoInsercao(array, meio +1, direita, alvo);
    else if(array[meio] > alvo)return posicaoInsercao(array, esquerda, meio - 1, alvo);
    else return meio;
}