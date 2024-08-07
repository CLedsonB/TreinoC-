#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct lista{
    string nome;
    int peso;
};

bool cmp(lista a, lista b){
    return (a.peso < b.peso);
}

int main() {
    vector<lista> atleta;
    lista aux;
    int n,i;
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> aux.nome >> aux.peso;
        atleta.push_back(aux);
    }
    stable_sort(atleta.begin(),atleta.end(),cmp);
    
   for(i=0;i<n;i++){
        if(atleta[i].peso <= 44)
            cout << atleta[i].nome << " Super-ligeiro" << endl;
        else if(atleta[i].peso <= 48)
            cout << atleta[i].nome << " Ligeiro" << endl;
        else if(atleta[i].peso <= 52)
            cout << atleta[i].nome << " Meio-leve" << endl;
        else if(atleta[i].peso <= 57)
            cout << atleta[i].nome << " Leve" << endl;
        else if(atleta[i].peso <= 63)
            cout << atleta[i].nome << " Meio-medio" << endl;
        else if(atleta[i].peso <= 70)
            cout << atleta[i].nome << " Medio" << endl;
        else if(atleta[i].peso <= 78)
            cout << atleta[i].nome << " Meio-pesado" << endl;
        else
            cout << atleta[i].nome << " Pesado" << endl;        
   }
}