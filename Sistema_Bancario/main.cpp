#include "classeConta.hpp"
#include <iostream>


int main() {

    Conta conta01;
    conta01.setNumero(2374);
    conta01.setTitular( "Luiz" );
    conta01.depositar( 1500.99);

    int a = conta01.getNumero();
    std::cout << a << std::endl;

    conta01.montarStringConta();
    return 0;
}
