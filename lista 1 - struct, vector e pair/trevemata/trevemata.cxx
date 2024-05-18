#include <iostream.h>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int array_size(int arr[]) { return sizeof arr / sizeof arr[0]; };


struct trevemata {
    string nome;
    int peso;
};

int main(){
    vector<pair<string,int>> amigos;
    pair<string,int> aux;
    vector amigosQcaiu;
    int num, max;
    
    cin >> num;
    
    for(i=0;i<num;i++){
        cin >> aux.first >> aux.second;
        amigos.push_back(aux);
    };
    cin >> max;
    
    for(i=0;i<num;i++){
        if(amigos[i].second >= max){
            amigosQcaiu[i] = amigos[i].second;
        };
    };
    if(array_size(amigosQcaiu) == 0)
        cout << "Vamos todos encontrar a montanha!";
    else{
        cout << "Vamos virar almoço de aranhas gigantes!"
        for(i=0;i<=array_size(amigosQcaiu);i++){
            cout << amigosQcaiu[i] << endl;
        };
    };
};



