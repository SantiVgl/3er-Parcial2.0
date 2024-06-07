#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"A cual termino quieres llegar: ";
    cin>>n;
    for (int i=0;i<=n;i+=5) {
        cout<<i<<endl;
    }

    return 0;
}