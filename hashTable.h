#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>
#include <list>
#include "aluno.h"

class HashTable {
private:
    static const int TAM = 10;

    std::vector<std::list<Aluno>> tabela;

    int funcaoHash(int matricula);

public:
    HashTable();

    void inserir(int matricula, std::string nome);

    void buscar(int matricula);

    void remover(int matricula);

    void imprimir();
};

#endif