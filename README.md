#Estrutura Básica de dados 1

Repositório voltado a Disciplina EDB1 (BTI - UFRN)

Compilador: Mingw64 - 1 Adicionar ao disco (C:) - 2 Adicioar o caminho em variável Path

| Arquivo Fonte(s)          | Comando para Compilar               | Descrição                                     |
| ------------------------- | ----------------------------------- | --------------------------------------------- |
| `main.cpp`                | `g++ main.cpp -o main`              | Compila apenas `main.cpp`                     |
| `main.cpp + operacao.cpp` | `g++ main.cpp operacao.cpp -o main` | Compila projeto com múltiplos arquivos        |
| Todos os `.cpp`           | `g++ *.cpp -o programa`             | Compila todos os arquivos `.cpp` no diretório |
| Usando C++17              | `g++ -std=c++17 main.cpp -o main`   | Usa a versão C++17 do compilador              |
| Com warnings              | `g++ -Wall main.cpp -o main`        | Mostra todos os avisos do compilador          |


| Situação                                    | Comando                                                     | Explicação                                                                 |
|---------------------------------------------|-------------------------------------------------------------|----------------------------------------------------------------------------|
| Compilar um único arquivo                   | `g++ main.cpp -o programa`                                  | Gera o executável `programa` a partir de `main.cpp`                        |
| Compilar múltiplos arquivos                 | `g++ main.cpp operacao.cpp -o programa`                     | Junta vários arquivos fonte em um único executável                         |
| Compilar todos os `.cpp` do diretório       | `g++ *.cpp -o programa`                                     | Compila todos os arquivos `.cpp` do diretório atual                        |
| Compilar com padrão C++17                   | `g++ -std=c++17 main.cpp -o programa`                       | Usa recursos da versão C++17                                               |
| Compilar com avisos (warnings)              | `g++ -Wall main.cpp -o programa`                            | Ativa todos os avisos do compilador (`-Wall` = "warnings all")             |
| Compilar com warnings extras                | `g++ -Wall -Wextra main.cpp -o programa`                    | Ativa mais avisos, além dos padrões                                        |
| Compilar com debug                          | `g++ -g main.cpp -o programa`                               | Gera executável com símbolos de debug (para usar com GDB)                  |
| Compilar com otimização                     | `g++ -O2 main.cpp -o programa`                              | Ativa otimizações para desempenho                                          |
| Somente compilar (gerar `.o`)               | `g++ -c main.cpp`                                           | Gera `main.o`, arquivo objeto, sem criar o executável                      |
| Compilar manualmente arquivos `.o`          | `g++ main.o operacao.o -o programa`                         | Linka os arquivos objeto gerando o executável                              |
| Executar o programa compilado               | `./programa` (Linux/macOS) ou `programa.exe` (Windows)      | Roda o programa gerado após compilação                                     |
