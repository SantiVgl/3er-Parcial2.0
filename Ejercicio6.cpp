#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Dame el numero de la carta: \n";
    cin>>num;
    switch(num){
        case 1:
              cout<<"As";
              break;
        case 10:
            cout<<"Sota";
        case 11:
            cout<<"Caballo";
          break;
        case 12:
            cout<<"Rey";
          break;
     default:
        if(num>=2 && num<=9){
            cout<<"No es ninguna figura y tampoco es As";
        }else if (num>12){
            cout<<"Este no es numero de la baraja española";
        }
          break;
    }
    return 0;
}