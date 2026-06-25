
Funcionalidades:
O sistema possui as seguintes funcionalidades:
Inserir aluno
Buscar aluno pela matrícula
Remover aluno
Exibir toda a tabela hash
Menu interativo
Estrutura do Projeto
Projeto/
├── aluno.h
├── hashTable.h
├── hashTable.cpp
├── main.cpp
└── README.md

-Como Compilar
Utilizando o g++:
g++ main.cpp aluno.cpp hashTable.cpp -o programa
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
tring)
Compilador g++
