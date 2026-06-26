## Descrição
Este projeto implementa um sistema simples de gerenciamento de alunos utilizando a estrutura de dados **Tabela Hash** com tratamento de colisões por **encadeamento separado** (`std::list`).
O programa permite cadastrar, buscar, remover e listar alunos através de um menu interativo no terminal.
# Objetivo
Aplicar os conceitos de:

- Estrutura de Dados – Tabela Hash;
- Tratamento de colisões utilizando listas encadeadas;
- Utilização da STL do C.
---
# Estrutura do Projeto
```
 Projeto
├── aluno.h
├── hashTable.h
├── hashTable.cpp
├── main.cpp
└── README.md
```
---
# Classe Aluno
Responsável por armazenar as informações de um aluno.
### Atributos
- Matrícula
- Nome
### Métodos
- Construtor
- getMatricula()
- getNome()
---
# Classe HashTable
Responsável por gerenciar os alunos na tabela hash.
### Métodos
- Inserir aluno
- Buscar aluno
- Remover aluno
- Exibir tabela
- Função Hash
---
# Como Compilar
## Requisitos
- Compilador C (g++)
- Terminal (Prompt de Comando, PowerShell ou Linux)
## Compilação
Abra o terminal na pasta onde estão os arquivos do projeto e execute:
```bash
g++ main.cpp hashTable.cpp-o programa
```
## Executando
# Windows
programa.exe

