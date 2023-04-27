#include "referencias.hpp"
#include <iostream>

void resultado_imc(float imc) {
    if (imc < 18.5) {
        std::cout << "Voce esta abaixo do seu peso ideal";
    } else if (imc > 18.5 and imc <= 24.9) {
        std::cout << "Parabéns! Você está no seu peso ideal!";
    } else if (imc > 25.0 and imc <= 29.9) {
        std::cout << "Você está acima do seu peso (sobrepeso)";
    } else if (imc > 30.0 and imc <= 34.9) {
        std::cout << "Obesidade grau I";
    } else {
        std::cout << "Obesidade grau II";
    }
}

float peso() {
    float peso;
    std::cout << "Digite seu peso: " << std::endl;

    std::cin >> peso;
    return peso;
}
float altura() {
    float altura;

    std::cout << "Digite seu altura: " << std::endl;
    std::cin >> altura;
    return altura;
}

float calculo_imc(float peso, float altura) {

    float imc = peso / (altura * altura);
    return imc;
}