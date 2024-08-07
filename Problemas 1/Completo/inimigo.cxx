#include <iostream>
#include <vector>
#include <utility>

using namespace std;

struct inimigo {
    string nome;
    int dano;
};

int main(){
    vector<pair<string,int>> inimigos;
    pair<string,int> aux;
    int i, num, max, c =0, d=0;

    cin >> num;

    for(i=0;i<num;i++){
        cin >> aux.first >> aux.second;
        inimigos.push_back(aux);
    }
    cin >> max;
    for(i=0;i<num;i++){
        if(max > inimigos[i].second){
            max -= inimigos[i].second;
            if(inimigos[i].first == "Dalek"){
                d += 1;
            }else if(inimigos[i].first == "Cyberman") {
                c +=1;
            }
            if(i+1 == num){
                cout << "Consegui derrotar todos!";
            }
        }else {
            cout << "Consegui derrotar "<<d<<" daleks e "<< c<< " cyberman" << endl;
            cout << "Preciso de ajuda!";
            break;
        };
    };
};