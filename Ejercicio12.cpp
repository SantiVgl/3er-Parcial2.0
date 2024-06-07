#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout<<"El primer numero: ";
    cin>>n1;
    cout<<"El segundo numero: ";
    cin>>n2;

    if (n2 !=0&&n1%n2==0) {
        cout<<n1<<" es divisible entre "<<n2<<endl;
    } else {
        cout<<n1<<" no es divisible entre "<<n2<<endl;
    }

    return 0;
}