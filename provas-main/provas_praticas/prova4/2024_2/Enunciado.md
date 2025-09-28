# IMD0029 - EDB1 - 2024.2 - Prova de Reposição (P4)
# Prof. Eiji Adachi

## **LEIA ANTES DE COMEÇAR**

- Atividade individual sem consulta a pessoas ou materiais (impresso ou eletrônico).
- O valor de cada questão está indicado no enunciado.
- Mantenha celulares e outros eletrônicos desligados durante a prova.
- Desvios éticos resultarão em nota zero nesta unidade.
- Você recebeu diretórios para cada questão, cada um contendo uma assinatura de função, um arquivo ``Makefile`` e um teste executável, que pode ser executado usando o comando ``make run-test``. O teste executável não garante a total corretude da sua implementação. 
- Siga a assinatura de função fornecida; não a altere. Se necessário, crie funções auxiliares, mas mantenha a assinatura original.

### Critérios de Correção

Na correção desta atividade, serão considerados:

- **Obediência às regras** das assinaturas de função e do entregável (arquivo .zip e estrutura de diretórios), conforme especificado.
- **Ausência de erros ou warnings** na compilação do código-fonte. Use o `makefile` para compilar.
- **Execução correta dos programas**, sem falhas e produzindo os resultados esperados.
- **Atendimento aos critérios de complexidade**, se estabelecidos no enunciado.
- **Qualidade do código-fonte**: boa apresentação, organização, identação, nomes de variáveis adequados, modularização em funções, etc.

### Entregável

- O entregável deve manter a mesma estrutura de diretórios do código-fonte recebido, contendo os arquivos de solução em cada diretório de questão.
- O diretório raiz deve ter seu nome, no formato `PRIMEIRO_NOME_SOBRENOME`. Exemplo:
  ```
  JOAO_SILVA
  ├── q1
  ├── q2
  └── q3
  ```
- Compacte toda a estrutura em um arquivo `.zip` (não use `.rar`, `.tar.gz` ou outros), seguindo o mesmo padrão de nome: `PRIMEIRO_NOME_SOBRENOME.zip`.
- O `.zip` não deve conter arquivos objeto e executáveis; remova-os antes de compactar.
- Entregue o arquivo via SIGAA até o horário estabelecido. Entregas após o prazo só serão aceitas em casos excepcionais (ex.: SIGAA fora do ar).

<div style="page-break-after: always;"/>

## Questão 1 - Valor: 2.5
Dada uma lista simplesmente encadeada com ponteiro para o início, implemente o seguinte método:

``` c++
int ListaEncadeada::removerTodos(int val)
```
Esse método remove todos os elementos da lista que possuem valor igual a ``val``, retornando o número de elementos que foram removidos da lista. 

Por exemplo: considere uma lista no seguinte estado ``{1 -> 7 -> 3 -> 7 -> 5 -> 7 -> 14 -> null}``. Após a execução da chamada ``removerTodos(7)``, a lista estará no estado ``{1 -> 3 -> 5 -> 14 -> null}`` e o método retornará 3, pois foram removidos três nós cujos valores eram ``7``. 

**Sua solução deverá ter complexidade de tempo θ(n).**

Obs.: Não é permitido usar estruturas auxiliares, como stack, array ou vector, por exemplo.

<div style="page-break-after: always;"/>


## Questão 2 - Valor 2.0
Implemente o algoritmo de ordenação Quick Sort de modo que os elementos do array de entrada estejam ordenados em ordem decrescente. Sua implementação deverá seguir a assinatura:

``` c++
void quickSort(int array[], int esquerda, int direita)
```

A função deve ser implementada no arquivo ``QuickSort.cpp``. Note que há nesse projeto uma função auxiliar chamada ``estaDecrescente`` que eu criei para poder testar a ordenação. Você não pode alterar essa função auxiliar.

<div style="page-break-after: always;"/>

## Questão 3 - Valor 2.5
Sequências bitônicas são aquelas que possuem duas sequências, sendo uma sequência inicial crescente, seguida de uma sequência decrescente. Ou seja, os elementos de uma sequência bitônica obedecem a seguinte relação: 

A[0] < A[1] < ... < A[i-1] < A[i] > A[i+1] > ... > A[n] 
 
Considere que um array bitônico é um array de inteiros sem repetições cujos elementos representam uma sequência bitônica. Neste contexto, implemente uma função que recebe como entrada um array bitônico e retorna o índice do elemento do “pico”. O elemento do “pico” é o último elemento da sequência inicial crescente e o primeiro elemento da sequência final decrescente, ou seja, é o elemento A[i] da relação acima. Sua função deverá obrigatoriamente ser recursiva, ter complexidade Θ(lg(n)) e seguir a assinatura:

``` c++
int acharPico(int array[], int esquerda, int direita)
```

Obs.: Nesta questão, não podem ser usadas instruções para realizar repetição, como for, while e do-while. Ou seja, você não poderá usar instruções de repetição; você deverá construir sua solução apenas com chamadas recursivas. A função deve ser implementada no arquivo ``Bitonica.cpp``. 

<div style="page-break-after: always;"/>

## Questão 4 - Valor 1.5
Um dos passos do algoritmo de ordenação Insertion Sort é encontrar no sub-array já ordenado a posição de
inserção de um elemento. No algoritmo visto em aula, a busca pela posição de inserção foi feita de modo
sequencial. Suponha que implementamos uma versão do algoritmo de ordenação Insertion Sort usando uma
adaptação da busca binária para encontrar no sub-array a posição de inserção de um elemento. Essa modicação melhora a complexidade do algoritmo de ordenação Insertion Sort? Justique sua resposta considerando o pior caso.

## Questão 5 - Valor 1.5
Explique em quais situações o Quick Sort cai em seu pior caso, explicitando qual a complexidade no pior caso, e discuta ao menos uma estratégia para mitigar esse problema.