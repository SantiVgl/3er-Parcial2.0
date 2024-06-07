#include <iostream>
using namespace std;

int main() {
    int hora;
    cout<<"La hora del dia ";
    cin>>hora;
    if (hora>18) {
        cout<<"Buenas nochis"<<endl;
    } else if (hora > 11) {
        cout<<"Buenas tardes"<<endl;
    } else {
        cout<<"Buenos dias"<<endl;
    }

    return 0;
}