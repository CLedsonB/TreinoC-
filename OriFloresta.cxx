#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

struct pontuacao {
    int xpMissao;
    int bonusMissao;
    int m;
    int adc;
};

// y = x * (b+a)
// if y >= m -> up , nao up


int main() {
    vector<pontuacao> xpMissao;
    vector<pontuacao> bonusMissao;
    pontuacao aux;
    int i,n, total, adc;
    
    cout << "\nInsira Quant. de missoes cumprida\n\tValores aceitos [1,100]\n--> ";
    cin >> n;
    
    cout << "\nInsira o Xp de cada uma das " <<
    n << " missoes\n\tValores aceitos [1,10]\n--> ";
    
    for(i=0;i<n;i++){
        cin >> aux.xpMissao;
        xpMissao.push_back(aux);
    }
    
    cout << "\nInsira o bonus de cada uma das "<< n <<
    " missoes\n\t Valores aceitos [1,5]\n--> ";
    
    for(i=0;i<n;i++){
        cin >> aux.bonusMissao;
        bonusMissao.push_back(aux);
        }
        
    cout << "\nInsira a quant. de xp para subir de nivel\n--> ";
    cin >> aux.m;
    
    cout << "\nInsira o bonus adcionais para cada uma das " << n << " missoes\n\tValores aceitos [0,2]\n--> ";
    cin >> aux.adc;
     
    total = 0;
    for(i=0;i<n;i++){
        total += xpMissao[i].xpMissao * (bonusMissao[i].bonusMissao + aux.adc);
    }
    if(total >= aux.m)
        cout << "\nUpou de nivel!!\n";
    else
        cout << "\nNao foi dessa vez!\n";
}