#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro {
    protect:
        int id;
        std::string titulo;
        std::string autor;
        bool emprestado;
    public:
        Livro();
        Livro(int i, const std::string& t, std::string& a);
};

#endif