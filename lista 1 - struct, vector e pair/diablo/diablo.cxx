#include <iostream.h>
#include <vector>
#include <utility>
#include <string>

using namespace std;

struct loja {
    int v;
    int d;
    int Nv;
};

int maiorValor(int array[], int tamanho) {
    int maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }
    return maior;
}

int main() {
    vector<loja> valores;
    vector<loja> danos;
    vector<loja> Nvalores;
    loja aux;
    
    int i, y, x, dMaior, contador;
    
    cout << "num. itens --> ";
    cin >> y;
    
    cout << "valores --> ";
    for(i=0;i<y;i++){
        cin >> aux.v;
        valores.push_back(aux);
        }
    
    cout << "danos --> ";
    for(i=0;i<y;i++){
        cin >> aux.d;
        danos.push_back(aux);
    }
    
    cout << "valor --> ";
    cin >> x;
   
   //criar novo array com produtos q ele pode comprar
   
    for(i=0;i<y;i++){
        if(x>=valores[i].v)
            Nvalores[i] = valores[i];
        }
        
        //imprimir valores do novo array
        
        for(i=0;i<y;i++)
            cout << valores;
    
}