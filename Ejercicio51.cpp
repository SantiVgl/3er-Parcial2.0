#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char name_correcto[] = "Santiago";
    const char pass_correcto[] = "2b";

    char name[20], pass[20];  
    int intentos=3, cantidad, precio, total = 0;

    do {
        cout<<"Nameee: ";
        cin>>name;
        cout<<"Passss: ";
        cin>>pass;

        if (strcmp(name, name_correcto)==0&&strcmp(pass, pass_correcto)==0) {
            cout<<"Que rolloo, haz ingresado al sistema\n";
            break;
        } else {
            cout<<"Datos incorrectos. Intentos restantes: "<<intentos-1<<"\n";
            intentos--;
            if (intentos == 0) {
                cout<<"No hay intentos ehhh\n";
                return 0;
            }
        }
    } while (intentos>0);

    while (true) {
        cout<<"Cantidad de articulos (0 para terminar): ";
        cin>>cantidad;
        if (cantidad==0)break;
        cout<<"Precio articulo: ";
        cin>>precio;
        if (cantidad>0 && precio>0)total+=cantidad*precio;
        else cout<<"Fekaaaa\n";
    }

    cout<<"Total para pagar $: "<<total<<"\n";

    return 0;
} 