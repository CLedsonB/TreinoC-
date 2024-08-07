#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct lista {
    string nome;
    int mTotal;
    int mCum;
    
};

bool cmp(lista a, lista b){
    return (a.nome < b.nome);
}

int main() {
    vector<lista> nomes;
    lista aux;
    int i, n;
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> aux.nome >> aux.mTotal >> aux.mCum;
        nomes.push_back(aux);
    }
    stable_sort(nomes.begin(),nomes.end(),cmp);
    
    for(i=0;i<n;i++)
        cout << nomes[i].nome << " " << nomes[i].mCum << endl;
}
    