#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> cartas, Psim, Pnao, Ppronto;
    int num= 0;
    
    while(num != 25){
        cin >> num;
        if(num < 0){
            Pnao.push(num);
         }
        else if(num == 0){
            Ppronto.push(Psim.top());
            Psim.pop();  
        }
        else if(num == 25){
            while(!Psim.empty()){
                Pnao.push(Psim.top());
                Psim.pop();
            }
        }
        else if(num > 0){
            Psim.push(num);
        }
    }
    while(Ppronto.size() > 0){
        cout << Ppronto.top() << " ";
        Ppronto.pop();
    }
    cout << endl;
    while(Pnao.size() > 0){
        cout << Pnao.top() << " ";
        Pnao.pop();
    }
}