#include <iostream>
using namespace std;

int main () 
{
    int n;
    
    cout<<"Digite el numero de posiciones: ";
    cin>>n;
    string personitas[n];
    
    for (int i=0;i<n;i++) {
        cout<<"Digite un nombre para la posicion" <<i<< ":";
        cin>>personitas[i];
    }
    for (int i= 0; i < n; i++) {
        cout<<"El dato en la posicion" <<i<< "es:" << personitas[i]<<endl;
    }
    
    return 0;
}