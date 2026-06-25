#include "livro.h"

Livro::Livro() : id(0), titulo(""), autor(""), emprestado(false) {}

Livro::Livro(int i, const std::string& t, const std::string& a)
    : id(i), titulo(t), autor(a), emprestado(false) {}