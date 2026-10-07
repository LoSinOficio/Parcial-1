#include <iostream>
using namespace std;

struct Direccion
{
    char calle[30];
    int numero;
};

struct Persona
{
    char nombre[30];
    int edad;
    Direccion direccion;
};

int main()
{
    Persona persona;

    cout << "Tamaño de Persona: " << sizeof(persona) << " bytes" << endl;

    return 0;
}
