#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct planeta{
    int id;
    int grau;
};

bool cmp(planeta a, planeta b){
    return (a.grau > b.grau);
}

int main() {
    vector<planeta> lista;
    planeta aux;
    int i, n;
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> aux.id >> aux.grau;
        lista.push_back(aux);
    }
    stable_sort(lista.begin(),lista.end(),cmp);
    
    for(i=0;i<n;i++)
        cout << lista[i].id << " " << lista[i].grau << endl;
}
    