#include <iostream>

using namespace std;

int main() {
    const int tamanhoVetor = 7;
    int vetor[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; i++) {
        int numero;
        cin >> numero;

        if (numero >= 0) {
            vetor[i] = numero;
        }
        else{
            i--;
        }

    }
    int menor= 0;;
    int pos=0;
    for (int i = 0; i < tamanhoVetor; i++) {
        if(vetor[i]< menor){
        vetor[i]=menor;
        cout<<vetor[i];
        }
    }
    cout << endl;

    for (int i = 0; i < tamanhoVetor; i++) {
    }

    for (int i = 0; i < tamanhoVetor; i++) {
        for (int j = 0; j < tamanhoVetor; j++) {
            cout << vetor[j] << " ";
        }
        cout << endl;
            menor=-1;
        if (vetor[i] != -1) {
            vetor[i] = -1;
        }
    }

    return 0;
}
//ghgfhgfhgfhhgffgnvvvn
