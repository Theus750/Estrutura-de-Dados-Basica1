#define __CHECK_INTEGRIDADE__ 1
#include "../header/Lista.h"
#include <stdexcept>
#include <sstream> // pra implementar o método imprimir ​

// Implemente aqui sua solução ​
int Lista::removerTodos(const std::string& elemento)                                                                                                                                                                                                // versão: EAMB-1.0
{// Begin​​⁣
    throw new std::runtime_error("Ainda não implementado.");
}// End​


// Implemente aqui sua solução ​
bool Lista::inserirOrdenadoSemRepeticao(const std::string& elemento)                                                                                                                                                                                                // versão: EAMB-1.0
{// Begin​​⁣
    throw new std::runtime_error("Ainda não implementado.");
}// End​



















































// Não alterar código daqui pra baixo ​
Lista::Lista(){this->quantidade=0;this->primeiro=nullptr;this->ultimo=nullptr;}Lista::~Lista(){auto a=this->primeiro;while(a!=nullptr){auto b=a;a=a->proximo;delete b;}this->primeiro=nullptr;this->ultimo=nullptr;this->quantidade=0;}bool Lista::inserirInicio(const std::string& x){No* n=new No(x);n->proximo=this->primeiro;this->primeiro=n;if(this->quantidade==0){this->ultimo=n;}this->quantidade++;return true;}const std::string& Lista::primeiroElemento()const{if(quantidade>0){return primeiro->valor;}else{throw std::out_of_range("A lista está vazia. Não é possível acessar o primeiro elemento.");}}const std::string& Lista::ultimoElemento()const{if(quantidade>0){return ultimo->valor;}else{throw std::out_of_range("A lista está vazia. Não é possível acessar o último elemento.");}}unsigned long Lista::tamanho()const{return quantidade;}std::string Lista::imprimir()const{std::ostringstream o;o<<"{";No* p=primeiro;while(p!=nullptr){o<<p->valor;if(p->proximo!=nullptr)o<<", ";p=p->proximo;}o<<"}";return o.str();}

StatusLista Lista::checarConsistencia() const {
    // Verificar se lista vazia tem ponteiros nulos
    if (quantidade == 0) {
        if (primeiro != nullptr || ultimo != nullptr) {
            return StatusLista::PONTEIROS_NULOS_INCORRETOS;
        }
        return StatusLista::OK;
    }

    // Verificar se lista não-vazia tem ponteiros não-nulos
    if (primeiro == nullptr || ultimo == nullptr) {
        return StatusLista::PONTEIROS_NULOS_INCORRETOS;
    }

    // Verificar se último->proximo == nullptr
    if (ultimo->proximo != nullptr) {
        return StatusLista::ULTIMO_NAO_TERMINA_EM_NULL;
    }

    // Verificar loop com algoritmo de Floyd (tartaruga e lebre)
    No* lento = primeiro;
    No* rapido = primeiro;
    while (rapido != nullptr && rapido->proximo != nullptr) {
        lento = lento->proximo;
        rapido = rapido->proximo->proximo;
        if (lento == rapido) {
            return StatusLista::LOOP_DETECTADO;
        }
    }

    // Verificar quantidade de nós
    unsigned long contador = 0;
    No* atual = primeiro;
    while (atual != nullptr) {
        contador++;
        atual = atual->proximo;
    }
    if (contador != quantidade) {
        return StatusLista::QUANTIDADE_INCORRETA;
    }

    return StatusLista::OK;
}
