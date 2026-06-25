#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro {
    private:
        int id;
        std::string titulo;
        std::string autor;
        bool emprestado;

    private:
        Livro();
        Livro(int i, const std::string& t, const std::string& a);
};

#endif