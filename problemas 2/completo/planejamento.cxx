#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct lista{
    string semente;
    float preco;
    float revenda;
    float quantia;
    float cb;
};

bool cmp(lista a, lista b){
    return (a.cb > b.cb);
}

int main() {
    vector<lista> loja;
    lista aux;
    int i, n, valor, contador, buy;
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> aux.semente >> aux.preco >> aux.revenda >> aux.quantia;
        aux.cb = (aux.revenda - aux.preco) / aux.preco * 100;
        loja.push_back(aux);
    }
    cin >> valor;
    
    stable_sort(loja.begin(),loja.end(),cmp);
    for(i=0;i<n && valor>0;i++){
        if(loja[i].quantia > 0){
            buy = min(valor / loja[i].preco, loja[i].quantia);
            valor -= buy * loja[i].preco;
            loja[i].quantia -= buy;
            if(buy > 0){
                cout << loja[i].semente << ' ' << buy << endl;
                contador += 1;
            }
        }
    }
    if(contador == 0){
        cout << "Melhor jogar outro jogo..." << endl;
    }
}
