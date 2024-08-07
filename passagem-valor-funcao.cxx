#include <iostream.h>

void trocar(int &,int &);

void trocar(int  &a,int &b){
    int x = a;
    a = b;
    b = x;
}
int main(void){
    int a,b;
    
    cin >> a;
    cin >> b;
    
    cout << "\n\nAntes : a = " << a << " b = " << b << endl;
    
    trocar(a,b);
    
    cout << "\nDepois : a  = " << a << " b = " << b << endl;
    
}