#include <iostream>
using namespace std;

struct Datos
{
    int edad;
    float promedio;
    char sexo;
};

typedef struct Datos Alumno;

struct Escuela
{
    Alumno alumno;
    int semestre;
    char carrera[20];
};

int main()
{
    Escuela escuela;

    int bytes = sizeof(escuela);
    int bits = bytes * 8;

    cout << "Tamaño en bytes: " << bytes << endl;
    cout << "Tamaño en bits: " << bits << endl;

    return 0;
}
