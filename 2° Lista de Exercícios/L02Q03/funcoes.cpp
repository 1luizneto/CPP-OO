#include "referencias.hpp"
#include <iostream>
#include <string> //n me esqueça

std::string nome(std::string name){

    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Digite seu nome: ";
    cin >> name;
    return name;
}


double nota1(){
    using std::cout;
    using std::cin;
    using std::endl;

    double n1; //essa aqui
    cout << "Digite sua nota 1: ";
    cin >> n1;
    return n1;
}

double nota2(){
    using std::cout;
    using std::cin;
    using std::endl;

    double n2; //essa aqui
    cout << "Digite sua nota 2: ";
    cin >> n2;
    return n2;
}

double nota3(){
    using std::cout;
    using std::cin;
    using std::endl;

    double n3; //essa aqui
    cout << "Digite sua nota 3: ";
    cin >> n3;
    return n3;
}

double func_media(double nota1, double nota2, double nota3){
    double media = ( nota1 + nota2 + nota3)/3;
    return media;
}


void imprime_nome(std::string name)
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << name;
}

void func_conceito(double funcmedia){
    using std::cout;
    using std::cin;
    using std::endl;


    if(funcmedia >= 80){
        cout << "A" << endl;

    }else if(funcmedia>=50 && funcmedia <80){
        cout <<  "B" << endl;

    }else{
        cout << "C" << endl;

    }
}
