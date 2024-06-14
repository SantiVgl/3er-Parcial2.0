#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Digite el numero de paises: ";
    cin>>n;

    string paises[n];
    for (int i=0;i<n;++i) {
        cout<<"Digite el pais "<<i+1<<": ";
        cin>>paises[i];
    } 
    int pos;
    cout<<"Digite la posición: ";
    cin>>pos;
    if (pos>=0 && pos<n) {
        cout<<"El pais que hay en la posicion "<<pos<<" es: "<<paises[pos]<<endl;
    } else {
        cout<<"No hay esa posicion."<<endl;
    }

    return 0;
}