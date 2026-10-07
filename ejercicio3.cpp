#include <iostream>
using namespace std;

struct Datos
{
    int edad;
    float promedio;
    char sexo;
};

typedef struct Datos Alumno;

int main()
{
    Alumno alumno;

    int bytesExtra = 2;

    cout << "Tamaño de la estructura: " << sizeof(alumno) << " bytes" << endl;
    cout << "Bytes extra: " << bytesExtra << " bytes" << endl;
    cout << "Total: " << sizeof(alumno) + bytesExtra << " bytes" << endl;

    return 0;
}
