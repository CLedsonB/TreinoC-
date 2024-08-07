#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

struct dobradores {
    int nDobrador;
    int nHabilidade;
    int id;
};

int main() {
    vector<dobradores> nHabilidade;
    vector<dobradores> id;
    dobradores aux;
    int i,n,e, y, contador;
    
    cout << "\nInsira num. de dobradores : " << endl;
    cin >> n;
    
    cout << "\nInsira as hab. dos " <<
    n << " dobradores\n\tValores aceitos [1,4] : ";
    
    for(i=0;i<n;i++){
        cin >> aux.nHabilidade;
        nHabilidade.push_back(aux);
    }
    cout << "\nInsira o id dos "<< n <<
    " dobradores\n\t Valores devem ser unicos : ";
    for(i=0;i<n;i++){
        cin >> aux.id;
        id.push_back(aux);
    }
    cout << "\nInsira um valor para elemento\n" <<
            "1 = agua\n2 = terra\n"<<
            "3 = fogo\n4 = ar\n\t--> ";
    cin >> y;
    contador = 0;
    
    cout << "\nDobradores selecionados : ";
    for(i=0; i<n;i++){
        if(y == nHabilidade[i].nHabilidade){
            cout << id[i].id << " ";
            contador += 1;
        }
    }
    if(contador == 0)
        cout << "Nenhum" << endl;
    else
        cout << endl;
}