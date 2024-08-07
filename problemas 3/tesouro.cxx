#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<char> lista, aux;
    queue<char> tesouro;
    char m;
    int tam, i;
    
    cin >> m;
    lista.push(m);
    tam = lista.size();
    
    for(i=1;i<=tam;i++){
        if(lista.front() == "{"){
            while(lista.front() != "}"){
                tesouro.push(lista.front());
                lista.pop();
            }
            tesouro.push(lista.front());
            while(tesouro.size() != 0){
                aux.push(tesouro.front());
                tesouro.pop();
            }
        }
    }
    cout << lista.size() << endl;
    for(i=1;i<=lista.size();i++){
        cout << lista.front() << " ";
        lista.pop();
    }
    cout << aux.size() << endl;
    for(i=1;i<=aux.size();i++){
        cout << aux.front() << " ";
        aux.pop();
    }
    cout << tesouro.size();
    for(i=1;i<=tesouro.size();i++){
        cout << tesouro.front() << " ";
        tesouro.pop();
    }
}