#include <iostream>
using namespace std;

int main() {
    char vocal;

    cout<<"Dame una letra: ";
    cin>>vocal;
    switch (vocal) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"La letra ingresada es una vocal\n";
            break;
        default:
            cout<<"La letra ingresada no es una vocal\n";
            break;
    }

    return 0;
}