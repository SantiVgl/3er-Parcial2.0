#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float b, e, r;
    
    cout<<"Dame el numero: ";
    cin>>b;
    cout<<"Dame el exponente: ";
    cin>>e;
    r = pow(b, e);
    cout<<b<<" elevado a "<<e<<" es "<<r<<endl;
    
    return 0;
}