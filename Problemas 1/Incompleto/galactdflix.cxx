#include <iostream>
#include <vector>
#include <utility>

using namespace std;

struct candidato {
    string nome;
    string sobrenome;
    int dados;
    int idade;
    int exp;
    int sal;
};

int main() {
    vector<candidato> nome;
    vector<candidato> sobrenome;
    vector<candidato> dados;
    candidato aux;
    int n, i, expE, salE;
    
    // quantidade de candidatos
    cin >> n;
    
   //nome, idade, exp, salario
    for(i=0;i<n;i++){
        cin >> aux.nome >> aux.sobrenome;
        nome.push_back(aux);
        cin >> aux.idade >> aux.exp >> aux.sal;
        dados.push_back(aux);
    }
    
    //valores da empresa
    cin >> expE >> salE;
    
//    cout << "\nTESTES....\n" << endl;
//    for(i=0;i<n;i++){
//        cout << "Nome : " << dados[i].nome << endl;
//        cout << "Idade : " << dados[i].idade << " Exp : " << dados[i].exp;
//        cout << " Salario: " << dados[i].sal << endl;
//    }
    
     for(i=0;i<n;i++){
        if(dados[i].idade >= 18){
            if(dados[i].exp > expE){
                if(dados[i].sal <= salE){
                    cout << dados[i].nome << ' ' << dados[i].sobrenome<< " foi selecionado" << endl; 
                    break;
                }
            }
        }
        else{
            cout << "Nenhum candidato foi selecionado" << endl;
        }
    }
}