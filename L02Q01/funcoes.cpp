#include <iostream>
#include <iomanip>
#include "referencias.hpp"

int quant_maca (int quantidade){

    using std::cin; using std::cout; using std::endl;
    cout << "Digite a quantidade de macas que vc quer:" << " ";
    cin >> quantidade;

    return quantidade;

}

double calculo_maca (int quantidade){
    double valor{};
    if (quantidade < 12){
        valor = quantidade*1.10;
    }else {
        valor = quantidade*1.50;
    }
    return valor;
}

void print_valor(double valor){
    using std::cin; using std::cout; using std::endl;
    cout << "R$" << valor << endl;
}