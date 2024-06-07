#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout<<"Dame el primer numero: ";
    cin>>n1;
    cout<<"Dame el segundo numero: ";
    cin>>n2;
    if (n1==n2) {
        cout<<"Los numeros son iguales"<<endl;
    } else if (n1>n2) {
        cout<<"El primer numero es mayor que el segundo"<<endl;
    } else {
        cout<<"El segundo numero es mayor que el primero"<<endl;
    }

    return 0;
}