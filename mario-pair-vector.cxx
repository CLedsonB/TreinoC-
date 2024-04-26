//vector - pair - Problema - Super Mario

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

struct moeda {
    string nome;
    int num;
};

int main() {
    vector<pair<string, int>> moedas;
    pair<string, int> aux;
    int n,i, val, soma=0;

    cout << "Insira quant. de moedas : " << endl;
    cin >> n;

    cout << "\nInsira pares de cor e valor de moeda : " << endl;
    for(i=0;i<n;i++){
        cin >> aux.first >> aux.second;
        moedas.push_back(aux);
    }
    
    cout << "\nInsira valor minimo para somatório : " << endl;
    cin>>val;
    cout << "" << endl;

    for(i=0;i<n;i++){
        if(moedas[i].second >= val){
            cout << moedas[i].first << 
            " " << moedas[i].second << endl;

            soma+=moedas[i].second;
        }
    }
    cout << "Soma de moedas >= " <<
    val << " = " << soma << endl;
}