#include <iostream>
using namespace std;

int main() {
    int n, acum=0;
    
    cout<<"El tamaño del vector: ";
    cin>>n;
    int vector[n];
    
    for(int i=0;i<n;i++) {
        cout<<"Digite un numero: ";
        cin>>vector[i];
        acum+=vector[i];
    }
    
    cout<<"La suma total es: " <<acum<<endl;
    
    return 0;
}
