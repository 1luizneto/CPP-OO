#include <iostream>
#include "referencias.hpp"

using namespace std;

int idade_eleitor()
{
    int idade;

    cout << "Digite sua Idade: " << endl;
    cin >> idade;

    return idade;
}

void tipo_eleitor (int idade)
{
    if (idade < 16)
    {
        cout << "Nao Eleitor" << endl;
    }else if (idade > 16 and idade < 65)
    {
        cout << "Eleitor Obrigatorio" << endl;
    }else if (idade > 65 or idade == 16 or idade == 17)
    {
        cout << "Eleitor facultativo" << endl;
    }
}