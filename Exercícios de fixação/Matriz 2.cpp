#include <iostream>
using namespace std;

int main(){
// Declarando as variáveis
    int i, j, num, linhas, colunas;
   
    cin >> linhas;
    cin >> colunas;

// Criando as matrizes 

    int **matrizA = new int*[linhas];
    int **matrizB = new int*[linhas];

    for (i= 0; i < linhas; i++){
        matrizA[i] = new int[colunas];
        for (j=0; j < colunas; j++){
            cin >> num;
            matrizA[i][j] = num;
        }
    }

    for (i=0;i < linhas; i++){
        matrizB[i] = new int[colunas];
        for (j=0; j < colunas; j++){
            cin >> num;
            matrizB[i][j] = num;
        }
    }

// Print formatado das matrizes

    std::cout << "Matrizes Formadas:" << endl;
    std:: cout << "\n";

    std:: cout << "A" << endl;
    for (i = 0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            std:: cout << matrizA[i][j] << " ";
        }
        std:: cout << "\n";
    }

    std:: cout << "\n";
    
    std:: cout << "B" << endl;
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            std::cout << matrizB[i][j] << " ";
        }
        std:: cout << "\n";
    }

    std:: cout << "\n";

// Soma e subtração das Matrizes

    std:: cout << "Soma das matrizes A e B:" << endl;
    std:: cout << "\n";

    int **matrizC = new int*[linhas];
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    std:: cout << "C" << endl;
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            std:: cout << matrizC[i][j] << " ";
        }
        std:: cout << "\n";

    }

    std:: cout << "Subtracao das matrizes A e B:" << endl;

    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    
    std:: cout << "C" << endl;
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            std:: cout << matrizC[i][j] << " ";
        }
        std:: cout << "\n";

    }


// Deletando as matrizes, primeiro apaga as linhas
    for (i=0; i < colunas; i++){
        delete [] matrizA[i];
    }

    for (i=0; i < colunas; i++){
        delete [] matrizB[i];
    }

    for (i=0; i < colunas; i ++){
        delete [] matrizC[i];
    }

    delete [] matrizA; 
    delete [] matrizB; // Depois apaga as matrizes
    delete [] matrizC;

    return 0;
}