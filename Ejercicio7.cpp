#include <iostream>
using namespace std;

int main() {
    int op;
    float base, altura, lado1, lado2, basemayor, basemenor, area;
    cout<<"Areas"<<endl;
    cout<<"1) El area de un triangulo"<<endl;
    cout<<"2) El area de un trapecio"<<endl;
    cout<<"3) El area de un rectangulo"<<endl;
    cout<<"Escoge: ";
    cin>>op;

    switch(op) {
        case 1:
            cout<<"La base del triangulo ";
            cin>>base;
            cout<<"La altura del triangulo ";
            cin>>altura;
            area=(base*altura) / 2;
            cout<<"El area del triangulo es "<<area<<endl;
            break;
        case 2:
            cout<<"La base mayor del trapecio ";
            cin>>basemayor;
            cout<<"La base menor del trapecio ";
            cin>>basemenor;
            cout<<"La altura del trapecio ";
            cin>>altura;
            area=((basemayor+basemenor)*altura) / 2;
            cout<<"El area del trapecio es "<<area<<endl;
            break;
        case 3:
            cout<<"La base del rectangulo ";
            cin>>base;
            cout<<"La altura del rectangulo ";
            cin>>altura;
            area=base*altura;
            cout<<"El area del rectangulo es "<<area<<endl;
            break;
        default:
            cout<<"No hay :P"<<endl;
            break;
    }

    return 0;
}