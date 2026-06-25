#include <iostream>
#include <limits>
#include "hashTable.h"

using namespace std;

int main() {

    HashTable hash;

    int opcao;

    do {

        cout << "\n===== MENU =====\n";
        cout << "1 - Inserir Aluno\n";
        cout << "2 - Buscar Aluno\n";
        cout << "3 - Remover Aluno\n";
        cout << "4 - Mostrar Tabela\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";

        cin >> opcao;

        switch(opcao) {

            case 1: {

                int matricula;
                string nome;

                cout << "Matricula: ";
                cin >> matricula;

                cin.ignore(
                    numeric_limits<streamsize>::max(),
                    '\n'
                );

                cout << "Nome: ";
                getline(cin, nome);

                hash.inserir(
                    matricula,
                    nome
                );

                break;
            }

            case 2: {

                int matricula;

                cout << "Matricula: ";
                cin >> matricula;

                hash.buscar(matricula);

                break;
            }

            case 3: {

                int matricula;

                cout << "Matricula: ";
                cin >> matricula;

                hash.remover(matricula);

                break;
            }

            case 4:

                hash.imprimir();

                break;

            case 0:

                cout << "Encerrando...\n";

                break;

            default:

                cout << "Opcao invalida!\n";
        }

    } while(opcao != 0);

    return 0;
}