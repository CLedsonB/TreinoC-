#include <iostream>
#include <vector>

using namespace std;

struct structArmas {
    int v;
    int d;
};

int main(){
    vector<structArmas> loja;
    structArmas arma;
    
    int i, x, y, maiorDano;
    bool flag = false;
    cin >> y;
    int array[y*2];
    
    for(i=1;i<=y;i++){
        cin >> array[i];
    }
    for(i=1+y;i<=y+y;i++){
        cin >> array[i+y];
    }
    for(i=1;i<=y;i++){
        arma.v = array[i];
        arma.d = array[i+y];
        loja.push_back(arma);
    }
    cin >> x;
    maiorDano = 0;
    for(i=1;i<=y;i++){
        if(loja[i].v  <= x){
            flag = true;
            if(loja[i].d >= loja[maiorDano].d){
                maiorDano = i;
            }
        }
    }
    if(flag == false){
        cout << "Yan Pobre" << endl;
    } else {
        cout << loja[maiorDano].v << " " << loja[maiorDano].d << endl;
    }
}