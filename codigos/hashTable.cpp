#include <iostream>
#include "hashTable.h"

Aluno::Aluno(int matricula, std::string nome) {
    this->matricula = matricula;
    this->nome = nome;
}

int Aluno::getMatricula() const {
    return matricula;
}

std::string Aluno::getNome() const {
    return nome;
}

HashTable::HashTable() {
    tabela.resize(TAM);
}

int HashTable::funcaoHash(int matricula) {
    return matricula % TAM;
}

void HashTable::inserir(int matricula, std::string nome) {

    int indice = funcaoHash(matricula);

    tabela[indice].push_back(
        Aluno(matricula, nome)
    );

    std::cout << "Aluno inserido com sucesso!\n";
}

void HashTable::buscar(int matricula) {

    int indice = funcaoHash(matricula);

    for (const auto& aluno : tabela[indice]) {

        if (aluno.getMatricula() == matricula) {

            std::cout << "\nAluno encontrado\n";
            std::cout << "Matricula: "
                      << aluno.getMatricula()
                      << std::endl;

            std::cout << "Nome: "
                      << aluno.getNome()
                      << std::endl;

            return;
        }
    }

    std::cout << "Aluno nao encontrado.\n";
}

void HashTable::remover(int matricula) {

    int indice = funcaoHash(matricula);

    for(auto it = tabela[indice].begin();
        it != tabela[indice].end();
        ++it) {

        if(it->getMatricula() == matricula) {

            tabela[indice].erase(it);

            std::cout
                << "Aluno removido com sucesso!\n";

            return;
        }
    }

    std::cout << "Aluno nao encontrado.\n";
}

void HashTable::imprimir() {

    std::cout
        << "\n===== TABELA HASH =====\n";

    for(int i = 0; i < TAM; i++) {

        std::cout << "[" << i << "] -> ";

        for(const auto& aluno : tabela[i]) {

            std::cout
                << "("
                << aluno.getMatricula()
                << ", "
                << aluno.getNome()
                << ") -> ";
        }

        std::cout << "NULL\n";
    }
}