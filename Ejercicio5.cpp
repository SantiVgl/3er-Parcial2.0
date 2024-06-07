#include <iostream>
using namespace std;

int main() {
    float horasChambeadeas, pHoras, sSemanal;

    cout<<"Dame horas trabajadas de esta semana: ";
    cin>>horasChambeadeas;
    cout<<"El precio por hora: ";
    cin>>pHoras;

    if (horasChambeadeas <= 40) {
        sSemanal=horasChambeadeas*pHoras;
    } else {
        sSemanal=40*pHoras+(horasChambeadeas-40)*(1.5*pHoras);
    }
    cout<<"El salario de semana es: $"<<sSemanal<<endl;

    return 0;
}