#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct today{
    int dia;
    int mes;
    int ano;
};

bool dia(today a, today b){ return (a.dia < b.dia); }
bool mes(today a, today b){ return (a.mes < b.mes); }
bool ano(today a, today b){ return (a.ano < b.ano); }

int main() {
    vector<today> lista;
    today aux;
    int i, n=0;
    
    while(cin.eof() != true){
        cin >> aux.dia >> aux.mes >> aux.ano;
        lista.push_back(aux);
        n += 1;
    }
    
    stable_sort(lista.begin(),lista.end(),dia);
    stable_sort(lista.begin(),lista.end(),mes);
    stable_sort(lista.begin(),lista.end(),ano);
    
    for(i=0;i<n-1;i++){
        cout << lista[i].dia << " "<< lista[i].mes << " " << lista[i].ano << endl;
    }
}
