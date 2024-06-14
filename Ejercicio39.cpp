#include <iostream>
using namespace std;

int main() {
    int n, pos=0, neg=0;

    cout<<"Ingrese el numero de posiciones: ";
    cin>>n;
    int arr[n];

    for (int j=0;j<n;j++) {
        arr[j]=(rand()%201)-100;
    }
    for (int j=0;j<n;j++) {
        cout<<"El numero en la posicion "<<j+1<<" es "<<arr[j];
        if (arr[j]>=0) {
            cout<<" (positivo)"<<endl;
            pos=pos+1;
        } else {
            cout<<" (negativo)"<<endl;
            neg=neg + 1;
        }
    }
    cout<<"Total de numeros positivos: "<<pos<<endl;
    cout<<"Total de numeros negativos: "<<neg<<endl;

    return 0;
}