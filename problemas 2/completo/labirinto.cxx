#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct lugar{
    string regiao;
    int id;
};

bool cmp(lugar a, lugar b){
    return (a.id < b.id);
}

int main() {
    vector<lugar> lab;
    lugar aux;
    int i,n=0;
    
    while(aux.id != 0 && aux.regiao != "#"){
        cin >> aux.id >> aux.regiao;
        lab.push_back(aux);
        n += 1;
    }
    
    stable_sort(lab.begin(),lab.end(),cmp);
    
    for(i=1;i<n;i++){
        cout << lab[i].regiao << endl;
    }
}