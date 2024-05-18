#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

struct loja {
    int v;
    int d;
    int Nv;
};

int maiorValor(vector <int> array, int tamanho) {
    int indice = 0; 
    int maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
            indice = i;
        }
    }
    return indice;
}

int main() {
    vector<int> valores;
    vector<int> danos;
    vector<int> Nvalores;

    int i, y, x, indice;

    cout << "num. itens --> ";
    cin >> y;

    cout << "valores --> ";
    for(i=0;i<y;i++){
        int valor;
        cin >> valor;
        valores.push_back(valor);
        }

    cout << "danos --> ";
    for(i=0;i<y;i++){
        int dano;
        cin >> dano;
        danos.push_back(dano);
    }

    cout << "valor --> ";
    cin >> x;

   //criar novo array com produtos q ele pode comprar

    for(i=0;i<y;i++){
        if(x>=valores[i])
            Nvalores[i] = valores[i];
        }

    int tamanho = sizeof(Nvalores) / sizeof(int);

    if(tamanho==0){
      cout << "Yan Pobre" << endl;
    }else {
      indice = maiorValor(Nvalores, tamanho);
      cout << valores[indice] << danos[indice] << endl;
    }
}
