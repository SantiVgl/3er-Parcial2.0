#include <iostream>
using namespace std;

int main () 
{
    int n;
    cout<<"Digite el tamaño del arreglo: ";
    cin>>n;
    int num[n];
    for (int i=0;i<n;i++) {
        cout<<"Digite un numero para la posicion" <<i<< ":";
        cin>>num[i];
    }
    for (int i=0;i<n;i++) {
        cout<<"El numero en la posicion" <<i<< "es:" <<num[i]<< endl;
    } 
    
    return 0;
}