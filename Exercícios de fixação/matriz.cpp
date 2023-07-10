#include <iostream>
using namespace std;

int main(){
    int i, j, l, c, num;

    cin >> l;
    cin >> c;

    int **matriz = new int*[l];

    for(i=0; i < l;i++){
        matriz[i] = new int[c];
        for (j=0;j<c;j++){
            cin >> num;
            matriz[i][j] = num;   
        }
    }

    for (i=0; i < l; i++){
        for (j=0; j < c; j++){
            std:: cout << matriz[i][j] << " ";
        }
        std:: cout << "\n";
    }

    for (i=0; i < c; i++){
        delete [] matriz[i];
    }

    delete [] matriz;
}