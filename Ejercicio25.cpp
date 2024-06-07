#include <iostream>
using namespace std;

int main() {
    int n[10], suma=0, may, men;

    cout<<"Dame 10 numeros:"<<endl;
    for (int i =0;i<10;i++) {
        cin>>n[i];
        suma+=n[i];
        if (i==0) {
            may=n[i];
            men=n[i];
        } else {
            if (n[i]>may) {
                may=n[i];
            }
            if (n[i]<men) {
                men=n[i];
            }
        }
    }
    cout<<"La suma es "<<suma<<endl;
    cout<<"El mayor "<<may<<endl;
    cout<<"El menor "<<men<<endl;

    return 0;
}