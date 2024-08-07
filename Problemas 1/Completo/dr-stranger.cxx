#include <iostream>
#include <vector>
#include <utility>

using namespace std;

struct dimensao {
    int u;
    int v;
    int d;
};

int main() {
    vector<dimensao> valor;
    dimensao aux;
    int i,n, contador = 0;
    
    cin >> n;
    
    int array[n*3];
    
    for(i=1;i<=n;i++){
        cin >> array[i];
    }
    for(i=n+1;i<=n*2;i++){
        cin >> array[i];
    }
    for(i=n+n+1;i<=n*3;i++){
        cin >> array[i];
    }
    for(i=1;i<=n;i++){
        aux.u = array[i];
        aux.v = array[n+i];
        aux.d = array[n+n+i];
        valor.push_back(aux);
    }
    for(i=0; i<n;i++){
        if(valor[i].d == valor[i].u + valor[i].v){
            contador++;
        }
    }
    if(contador == n){
        cout << "OK" << endl;
    }
    else{
        cout << "NOPE :(" << endl;
    }
}