#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> meuM, seuM;
    int quantM, quantS, n, i;
    
    cin >> quantM;
    for(i=0;i<quantM;i++){
        cin >> n;
        meuM.push(n);
    }
    
    cin >> quantS;
    for(i=0;i<quantS;i++){
        cin >> n;
        seuM.push(n);
    }
    
    while(!meuM.empty() && !seuM.empty()){
        if(meuM.front() >= seuM.front()){  //vitoria
            meuM.push(meuM.front() - seuM.front());
            meuM.pop();
        }
        else{ //derrota
            meuM.pop();
        }
        seuM.pop();
    }    
    cout << quantM - meuM.size() << endl;
}