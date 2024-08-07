#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> meuP, seuP;
    int h, i;
    
    cin >> h;
    for(i=0;i<h;i++){
        cin >> m >> n;
        meuP.push(m);
        seuP.push(n)
    }
    while(!meuP.empty() && !seuP.empty()){
        n1 = meuP.front();
        n2 = seuP.front();
        meuP.pop();
        seuP.pop();
        while(n1 > n2){ //enquanto ambos > 0
            n1 -= n2;   
        }
        if (n1 < n2) // n1 > n2, n1 permanece  n2>n1, n2 permanece
        
    }
}