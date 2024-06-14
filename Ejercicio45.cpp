#include <iostream>
using namespace std;

int main() 
{
    string arreglo1[2], arreglo2[3];
    string matriz[2][3];
    arreglo1[0]="fernando";
    arreglo1[1]="oscar";
    arreglo2[0]="74";
    arreglo2[1]="56";
    arreglo2[2]="10";
    matriz[0][0]=arreglo1[0];
    matriz[0][1]=arreglo1[1];
    matriz[0][2]=arreglo2[0];
    matriz[1][0]=arreglo2[1];
    matriz[1][1]=arreglo2[2];
    cout<<"Matriz:" <<endl;
    for (int i =0;i<2;i++) {
        for (int j=0;j<3;j++) {
            cout<<"En la posición ["<<i<<"]["<<j<<"]está: "<<matriz[i][j]<<endl;
        }
    }

    return 0;
}