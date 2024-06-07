#include <iostream>
using namespace std;

int main() 
{
    int num1, num2, num3;
    
    cout<<"Dame el primer numero: ";
    cin>>num1;
    cout<<"Dame el segundo numero: ";
    cin>>num2;
    cout<<"Dame el tercer numero: ";
    cin>>num3;

    if (num1==1 && num2==2 && num3==3) {
        cout<<"Acceso permitido\n";
    } else {
        cout<<"Acceso rechazado\n";
    }

    return 0;
}