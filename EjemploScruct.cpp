#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura ejemplooo
struct Persona {
    string nombre;
    int edad;
    float altura;
};

// Prototipo de la función
void imprimirPersona(const Persona& p);

int main() {
    Persona p1;
    p1.nombre = "Santi";
    p1.edad = 16;
    p1.altura = 1.75;

    imprimirPersona(p1);

    return 0;
}

// Definición de la función
void imprimirPersona(const Persona& p) {
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Altura: " << p.altura << " metros" << endl;}