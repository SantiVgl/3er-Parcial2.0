#include <iostream>
using namespace std;
int main() {
    int num[5];

    for (int i=0;i<5;i++) {
        cout<<"Dame un numero para la posicion " << i << ": ";
        cin>>num[i];
    }

    for (int i =0;i<5;i++) {
        cout<<"El numero en la posicion " <<i<< " es: " << num[i] <<endl;
    }

    return 0;
}