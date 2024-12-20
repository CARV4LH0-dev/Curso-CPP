#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    fstream arquivo;
    char opc = 's';
    string nome, linha;

    arquivo.open("cfbcursos.txt", ios::out|ios::app);

    while((opc == 's') or (opc == 'S')){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << "\n";
        cout << "\nInserir um novo nome? (S/N)";
        cin >> opc;
        system("cls");
    }

    arquivo.close();

    arquivo.open("cfbcursos.txt", ios::in);

    cout << "Nomes digitados: " << "\n";
    if (arquivo.is_open()){
        while(getline(arquivo, linha)){
            cout << linha << "\n";
        }
        arquivo.close();
    }
    else{
        cout << "Nao possivel abrir o arquivo!" << "\n";
    }

    return 0;
}
