#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct pokemon{
    string nome;
    int nivel;
};

bool nvc(pokemon a, pokemon b){ return (a.nivel < b.nivel); }
bool nvd(pokemon a, pokemon b){ return (a.nivel > b.nivel); }
bool nmc(pokemon a, pokemon b){  return (a.nome < b.nome);}
bool nmd(pokemon a, pokemon b){  return (a.nome > b.nome);}

    //a.nome < b.nome - nome crescente
    // a.nome > b.nome - nome descresente
    //a.nivel < b.nivel - nivel crescente
    //a.nivel > b.nivel - nivel decrescente

int main() {
    vector<pokemon> lista;
    pokemon aux;
    
    int i, n;
    string carac, ordem;
    
    cin >> n >> carac >> ordem;
    
    for(i=0;i<n;i++){
        cin >> aux.nome >> aux.nivel;
        lista.push_back(aux);
    }
    if(carac == "N" && ordem == "C")
        stable_sort(lista.begin(),lista.end(),nmc);
    if(carac == "N" && ordem == "D")
        stable_sort(lista.begin(),lista.end(),nmd);
    if(carac == "L" && ordem == "C")
        stable_sort(lista.begin(),lista.end(),nvc);
    if(carac == "L" && ordem == "D")
        stable_sort(lista.begin(),lista.end(),nvd);
        
    for(i=0;i<n;i++)
        cout << lista[i].nome << " " << lista[i].nivel << endl;
}