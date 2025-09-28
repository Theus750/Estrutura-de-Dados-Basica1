//
//  TabelaHash.h
//
//  Created by Eiji Adachi Medeiros Barbosa
//
#define CHECK_STATUS
#ifndef TABELA_HASH_H
#define TABELA_HASH_H

#include <string>
#include <unordered_set>
#include <iostream>

enum class Estado 
{ 
    LIVRE = 0, 
    OCUPADO, 
    REMOVIDO 
};

struct Elemento 
{
    std::string chave;
    std::string valor;
    Estado estado = Estado::LIVRE;
};

enum class ConsistenciaStatus {
    OK = 0,
    QUANTIDADE_INCORRETA,
    CHAVE_DUPLICADA,
};

class TabelaHash 
{
    friend class TabelaHashTestHelper;

private:
    Elemento* array;
    int capacidade;
    int quantidade;    
    
    static constexpr int CAPACIDADE_PADRAO = 17;
    static constexpr float CARGA_LIMITE_INFERIOR = 0.125f;
    static constexpr float CARGA_LIMITE_SUPERIOR = 0.5f;

    size_t valorHash(const std::string& chave) const 
    {
        size_t valorHash = 0;
		for (char c : chave) {
			valorHash += static_cast<unsigned int>(c);
		}
        return valorHash;
    }

    int hash(const std::string& chave) const 
    {
        return this->valorHash(chave) % this->capacidade; 
    }

    float fatorDeCarga() 
    {
        return static_cast<float>(quantidade) / static_cast<float>(capacidade);
    }

    void aumentar()
    {
        redimensionar(this->capacidade * 2 + 1);
    }











    void redimensionar(size_t novaCapacidade)                                                                                                                                                                               // EAMB 1.0
    {
        throw new std::runtime_error("Ainda não implementado.");
    }









public:
    TabelaHash(int capacidadeInicial = CAPACIDADE_PADRAO) : capacidade(capacidadeInicial) , quantidade(0)
    {
        this->array = new Elemento[this->capacidade];
    }

    ~TabelaHash()
    {
        delete [] this->array;
    }








    

    bool inserir(const std::string& chave, const std::string& valor)
    {
        
    int pos = hash(chave);
        int indiceRemovido = -1;
    for (int i = 0; i < capacidade; ++i) {
        int idx = (pos + i) % capacidade;

        if(indiceRemovido == -1 && array[idx].estado == Estado::REMOVIDO){
            indiceRemovido = idx;
        }

        else if (array[idx].estado == Estado::LIVRE) {
            if(indiceRemovido != -1) break;
            array[idx].chave = chave;
            array[idx].valor = valor;
            array[idx].estado = Estado::OCUPADO;
            quantidade++;
            return true;
        }

        if (array[idx].estado == Estado::OCUPADO && array[idx].chave == chave) {
            array[idx].valor = valor;
            return true; // chave já existe
        }
    }

    if(indiceRemovido != -1){
        array[indiceRemovido].chave = chave;
        array[indiceRemovido].valor = valor;
        array[indiceRemovido].estado = Estado::OCUPADO;
        quantidade++;
        return true;
    }

    throw std::overflow_error("Tabela cheia.");
    }


























































    ConsistenciaStatus checarConsistencia() const
    {
        int contador = 0;
        std::unordered_set<std::string> chaves;

        for (int i = 0; i < this->capacidade; ++i)
        {
            const Elemento& e = this->array[i];

            if (e.estado == Estado::OCUPADO)
            {
                contador++;

                // Verifica duplicatas
                if (chaves.count(e.chave) > 0)
                {
                    return ConsistenciaStatus::CHAVE_DUPLICADA;
                }
                chaves.insert(e.chave);
            }
        }

        if (contador != this->quantidade)
        {
            return ConsistenciaStatus::QUANTIDADE_INCORRETA;
        }

        return ConsistenciaStatus::OK;
    }

    int tamanho() const 
    {
        return quantidade;
    }

    bool vazia() const
    {
        return this->quantidade == 0;
    }

    bool cheia() const 
    {
        return this->capacidade == this->quantidade;
    }

    void imprimir() const
    {
        for (int i = 0; i < this->capacidade; ++i)
        {
            const Elemento& e = this->array[i];

            std::cout << "[" << i << "]: ";

            switch (e.estado)
            {
                case Estado::LIVRE:
                    std::cout << "LIVRE";
                    break;
                case Estado::REMOVIDO:
                    std::cout << "REMOVIDO";
                    break;
                case Estado::OCUPADO:
                    std::cout << "OCUPADO (" << e.chave << ", " << e.valor << ")";
                    break;
            }

            std::cout << std::endl;
        }
    }
};

#endif /* TABELA_HASH_H */
