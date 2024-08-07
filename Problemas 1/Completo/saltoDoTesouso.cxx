#include <iostream>
#include <vector>
#include <utility>
#include <string>


using namespace std;

struct explorador {
    int num;
    int altura;
    int salto;
};

int main() {
    vector<explorador> altura;
    explorador aux;
    int n, i, contador;
    
    cout << "\nInsira quant. de obstaculos : " << endl;
    cin >> n;
    
    cout << "\nInsira as alturas de cada obstaculo : " << endl;
    
    for(i=0;i<n;i++){
        cin >> aux.altura;
        altura.push_back(aux);
    }
    cout << "\nInsira a altura max. do salto : " << endl;
    cin >> aux.salto;
    
    int resultado;
    for (i=0;i<n;i++){
        if(altura[i].altura <= aux.salto)
            contador += 1;
        else
            break;
    }
    if(contador == n)
        resultado = 1;
    else
        resultado = 0;
        
    cout << "\nQuant. obs. vencidos : " <<
            contador << " Resultado : " <<
            resultado << endl;
}
    
