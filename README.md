## 📌 Descrição
Este projeto implementa um sistema simples de gerenciamento de alunos utilizando a estrutura de dados **Tabela Hash** com tratamento de colisões por **encadeamento separado** (`std::list`).
O programa permite cadastrar, buscar, remover e listar alunos através de um menu interativo no terminal.
---
# Objetivo
Aplicar os conceitos de:

- Programação Orientada a Objetos (POO);
- Estrutura de Dados – Tabela Hash;
- Tratamento de colisões utilizando listas encadeadas;
- Utilização da STL do C++.

---
# Estrutura do Projeto
```
📂 Projeto
│
├── aluno.h
├── aluno.cpp
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
# Funcionamento da Tabela Hash
O índice onde o aluno será armazenado é calculado pela função:
```cpp
indice = matricula % 10;
```
Exemplo:
| Matrícula | Índice |
|-----------|:------:|
| 101 | 1 |
| 112 | 2 |
| 121 | 1 |

# Funcionalidades
✅ Inserir aluno
- Calcula o índice pela função hash.
- Armazena o aluno na lista correspondente.
---
✅ Buscar aluno
- Localiza o índice.
- Percorre a lista procurando a matrícula.
---
✅ Remover aluno
- Procura o aluno.
- Remove da lista caso seja encontrado.
---
✅ Mostrar tabela
Exibe todas as posições da tabela hash.
Exemplo:
```
[0] -> NULL
[1] -> (101, João) -> (121, Maria) -> NULL
[2] -> (112, Pedro) -> NULL
```
---
# Complexidade
| Operação | Complexidade |
|-----------|:-----------:|
| Inserção | O(1) |
| Busca | O(1)* |
| Remoção | O(1)* |
\* Em média. No pior caso pode chegar a **O(n)** devido às colisões.
---
# Como Compilar
## Requisitos
- Compilador C++ (g++)
- Terminal (Prompt de Comando, PowerShell ou Linux)
## Compilação
Abra o terminal na pasta onde estão os arquivos do projeto e execute:
```bash
g++ main.cpp hashTable.cpp aluno.cpp -o programa
```
Ou, se preferir compilar todos os arquivos `.cpp` de uma vez:
```bash
g++ *.cpp -o programa
```
## Executando
### Windows
```bash
programa.exe
```
ou
```bash
.\programa.exe
```
### Linux / macOS
```bash
./programa
```

# Exemplo de Uso

```
