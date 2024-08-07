#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct structCandidato {
    string n;
    int i;
    int e;
    int s;
};

int main() {
    int num, i, x, p;
    string input;
    vector <structCandidato> cds;
    structCandidato cd;
    structCandidato selecionado;
    selecionado.n = "Ninguém";
    
    cin >> num;
    getline(cin,input);
    for(i=0;i<num;i++){
        getline(cin, cd.n);
        cin >> cd.i >> cd.e >> cd.s;
        cds.push_back(cd);
        cout << cd.n << " "<< cd.i << " " << cd.e << " " << cd.s << endl;
    }
    cin >> x >> p;
    for(i=0;i<num;i++){
        if(cd[i].i < 18 || cd[i].s > p || cd[i].e < x){
            continue;
        } else if (selecionado.n == "Ninguém"){
            selecionado = cds[i];
        } else if (cd[i].e > selecionado.e) {
            selecionado = cds[i];
        }
    }
    if (selecionado.n == "Ninguém"){
        cout << "Nenhum candidato foi selecionado" << endl;
    } else {
        cout << selecionado.n << " foi selecionado" << endl;
    }
    
    }