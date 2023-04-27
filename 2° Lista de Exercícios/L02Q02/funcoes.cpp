#include <iostream>
#include "referencias.hpp"


int ler_numero(int num){
    using std::cin; using std::cout;
    cout << "Digite um numero: ";
    cin >> num;

    return num;
}


void maior_menor(int num){
    using std::cin; using std::cout; using std::endl;
    if (num > 0){
        cout << "Maior que zero" << endl;
    } else if (num < 0){
        cout << "Menor que zero" << endl;
    } else if (num == 0){
        cout << "O numero e zero" << endl;
    }
}

