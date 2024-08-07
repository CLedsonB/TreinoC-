#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct domino{
    int a;
    int b;
    int soma;
};

bool cmp(domino a, domino b){
    return (a.soma < b.soma);
}

int main() {
    vector<domino> dom;
    domino aux;
    
    int i, n=10;
    
    for(i=0;i<n;i++){
        cin >> aux.a >> aux.b;
        aux.soma = aux.a + aux.b;
        dom.push_back(aux);
    }
    stable_sort(dom.begin(),dom.end(),cmp);
    
    for(i=0;i<n;i++){
        cout << dom[i].a <<" "<< dom[i].b << " = " << dom[i].soma << endl;
    }
}