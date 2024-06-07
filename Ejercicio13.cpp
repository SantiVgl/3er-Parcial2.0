#include <iostream>
using namespace std;

int main() {
    int numero;

    cout<<"Dame un numero: ";
    cin>>numero;
    if (numero%2==0) {
        cout<<"El numero es par"<<endl;
        if (numero%3==0) {
            cout<<"Es multiplo de 3"<<endl;
        } else {
            cout<<"No es multiplo de 3"<<endl;
        }
    } else {
        cout<<"El numero es impar."<<endl;
    }

    return 0;
}