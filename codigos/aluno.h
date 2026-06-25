#ifndef ALUNO_H
#define ALUNO_H

#include <string>

class Aluno {
private:
    int matricula;
    std::string nome;

public:
    Aluno(int matricula, std::string nome);

    int getMatricula() const;
    std::string getNome() const;
};

#endif