Sistema de Gerenciamento de Alunos com Tabela Hash
Descrição
Este projeto implementa um sistema simples de gerenciamento de alunos utilizando a estrutura de dados Tabela Hash com tratamento de colisões por encadeamento separado (std::list).
O sistema permite cadastrar, buscar, remover e listar alunos por meio de um menu interativo no terminal.
Objetivo:
O objetivo deste projeto é demonstrar a aplicação prática da estrutura de dados Hash Table, utilizando os conceitos de Programação Orientada a Objetos (POO) em C++.
Funcionalidades:
O sistema possui as seguintes funcionalidades:
Inserir aluno
Buscar aluno pela matrícula
Remover aluno
Exibir toda a tabela hash
Menu interativo
Estrutura do Projeto
Projeto/
│
├── aluno.h
├── aluno.cpp
├── hashTable.h
├── hashTable.cpp
├── main.cpp
└── README.md
Estrutura das Classes
Classe Aluno
Atributos
matrícula
nome
Métodos
Construtor
getMatricula()
getNome()

Classe HashTable
Responsável pelo gerenciamento da tabela hash.
Atributos
Vetor de listas (vector<list<Aluno>>)
Tamanho fixo da tabela (10 posições)
Métodos
inserir()
buscar()
remover()
imprimir()
funcaoHash()

-Como Compilar
Utilizando o g++:
g++ main.cpp hashTable.cpp -o programa
Ou, caso todos os arquivos estejam no mesmo diretório:
g++ *.cpp -o programa

Como Executar
Linux/macOS:
./programa
Windows:
programa.exe
Exemplo de Execução
1 - Inserir Aluno
2 - Buscar Aluno
3 - Remover Aluno
4 - Mostrar Tabela
0 - Sair


Matricula: 101
Nome: João
Aluno inserido com sucesso!
Depois:
Opcao: 4
===== TABELA HASH =====
[0] -> NULL
[1] -> (101, João) -> NULL
[2] -> NULL
[3] -> NULL
...
Vantagens da Implementação
Busca rápida utilizando função hash.
Tratamento eficiente de colisões com listas encadeadas.
Código organizado em classes.
Fácil manutenção e expansão.
Uso de recursos da STL, reduzindo complexidade de implementação.
Limitações
O tamanho da tabela é fixo (10 posições).
Não há verificação para impedir matrículas duplicadas.
Não existe redimensionamento automático da tabela hash.
Os dados são armazenados apenas em memória, sendo perdidos ao encerrar o programa.
Possíveis Melhorias
Impedir cadastro de matrículas repetidas.
Implementar redimensionamento automático (rehashing).
Salvar e carregar os dados em arquivos.
Permitir edição dos dados dos alunos.
Tornar o tamanho da tabela configurável pelo usuário.
Tecnologias Utilizadas
Linguagem C++
Programação Orientada a Objetos (POO)
STL (vector, list, string)
Compilador g++
