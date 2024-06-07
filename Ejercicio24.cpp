#include <iostream>
using namespace std;

int main() {
    float b, e;
    float r = 1;
    
    cout<<"Dame el numero: ";
    cin>>b;
    cout<<"Dame el exponente: ";
    cin>>e;
    for (int i=0;i<e;i++) {
        r*=b;
    }
    cout<<b<<" elevado a "<<e<<" es "<<r<< endl;
    
    return 0;
}