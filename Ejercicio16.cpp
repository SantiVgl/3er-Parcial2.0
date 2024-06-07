#include <iostream>
using namespace std;

int main() {
    int num[5], menor;

    for (int i=0;i<5;++i) {
        cout<<"Dame el numero: ";
        cin>>num[i];
    }
    menor=num[0];
    for (int i=1;i<5;++i) {
        if (num[i]<menor) {
            menor=num[i];
        }
    }
    cout<<"El numero menor es "<<menor<<endl;

    return 0;
}