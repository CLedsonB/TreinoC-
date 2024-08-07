#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> texec;
    int quant, tempo, n,i;
    
    cin >> quant >> tempo;
    
    for(i=0;i<quant;i++){
        cin >> n;
        texec.push(n);
    }
    for(i=0;i<quant;i++){
        if(tempo >= texec.front()){
            tempo -= texec.front();
            texec.pop();
            if(tempo == 0){
                cout << "pronto" << endl;
            }
        }
        else{
            int num = texec.front();
            num -= tempo;
            cout << texec.size() << endl;
            for(i=1;i<=texec.size();i++){
                cout << texec.front();
                texec.pop();
            }
        }
    }
}