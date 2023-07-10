#include <iostream>
using namespace std;

int vacina(int ano, int numero){
    for(int i = 0; i <= 1; i++){
        ano += numero;
        std:: cout << ano << " ";
    }
    return ano + numero;
}

int main(){
    int ano, numero;
    std:: cin >> ano;
    std:: cin >> numero;
    std:: cout << vacina(ano, numero) << endl;
    return 0;
}
