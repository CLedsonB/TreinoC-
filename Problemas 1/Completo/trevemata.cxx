#include <iostream.h>
#include <vector>
#include <utility>

using namespace std;

struct trevemata {
    string nome;
    int peso;
};

int main(){
    vector<pair<string,int>> amigos;
    pair<string,int> aux;
    int i, num, max, contador = 0;
    
    cin >> num;
    
    for(i=0;i<num;i++){
        cin >> aux.first >> aux.second;
        amigos.push_back(aux);
    };
    cin >> max;
    
//    for(i=0;i<num;i++){
//        cout << "nome : " << amigos[i].first << " peso : " << amigos[i].second << endl;
//    }
    
    for(i=0;i<num;i++){
        if(amigos[i].second > max){
            contador += 1;
        }
    }
    
    if(contador > 1){
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for(i=0;i<num;i++){
            if(amigos[i].second > max){
                cout << amigos[i].first << endl;
            }
        }
    }
    else{
        cout << "Vamos todos encontrar a montanha!" << endl;
        };
};