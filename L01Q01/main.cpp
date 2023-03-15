#include <iostream>
using namespace std;

int main() {
    double salario;
    char nome[100];
    cin >> nome;
    cin >> salario;

    cout << "O salário de "<< nome << " é = R$" << salario+(salario*0.20) << endl;
    return 0;
}