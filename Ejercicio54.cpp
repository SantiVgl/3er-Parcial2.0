int indica(int n) {
  if (n < 100 && n > 50) {
      return 1;
    } else {
    return 0;
    }
}
#include<iostream>
using namespace std;
int main(){
  int n;
  float n2,n3;
  cout<<"Ingresa el numero natural: ";
  cin>>n;
  cout<<"Ingresa los dos numeros decimales: ";
  cin>>n2>>n3;
  
//e) Checa si el num es menor a 100 y mayor a 50 (Santiago Varela).
  int resultado=indica(n);
    if (resultado==1) {
      cout<<"El número es menor que 100 y mayor a 50."<<endl;
    } else {
      cout<<"El número no está en el rango."<<endl;
    }
  
  return 0;
  }