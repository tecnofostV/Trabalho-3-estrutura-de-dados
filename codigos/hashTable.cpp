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
 