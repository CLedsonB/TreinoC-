#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct casa{
    int num;
    int nivel;
};

bool cmp(casa a, casa b){
    return (a.nivel > b.nivel);
}

int main() {
    vector<casa> cs;
    casa aux;
    int n,i,max;
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> aux.num >> aux.nivel;
        cs.push_back(aux);
    }
    stable_sort(cs.begin(),cs.end(),cmp);
    
  //  for(i=0;i<n;i++){
//        cin >> aux.nivel;
//        cs.push_back(aux);
//    }

    cin >> max;
    
    for(i=0;i<n;i++){
        if(cs[i].nivel >= max)
            cout << cs[i].num << " ";
    }
}