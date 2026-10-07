#include <iostream>
#include <sstream>   
#include <climits>   
#include <cfloat>    
#include <string>
#include <limits>    
#include <conio.h>
#include <iomanip>
using namespace std;

template <typename T>
string numeroATexto(T valor) {
    ostringstream oss;
    oss << valor;
    return oss.str();
}

template <typename T>
int contarCaracteres(T valor) {
    return numeroATexto(valor).size();
}

void mostrarInfo(const string& nombreTipo, size_t bytes,
                  const string& rango, int caracteres) {
    cout << "\n===== " << nombreTipo << " =====\n";
    cout << "Bytes en memoria : " << bytes << " byte(s)\n";
    cout << "Bits en memoria  : " << (bytes * 8) << " bit(s)\n";
    cout << "Caracteres (valor maximo escrito como texto): " << caracteres << "\n";
    cout << "Rango de valores : " << rango << "\n";
}

void mostrarMenu() {
    cout << "\n====================================\n";
    cout << " TIPOS DE DATOS PRIMITIVOS EN C++\n";
    cout << "====================================\n";
    cout << "1. char\n";
    cout << "2. short int\n";
    cout << "3. int\n";
    cout << "4. long int\n";
    cout << "5. long long int\n";
    cout << "6. float\n";
    cout << "7. double\n";
    cout << "8. long double\n";
    cout << "9. bool\n";
    cout << "0. Salir\n";
    cout << "Elige una opcion: ";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarInfo("char", sizeof(char),
                    numeroATexto((int)CHAR_MIN) + " a " + numeroATexto((int)CHAR_MAX),
                    contarCaracteres((int)CHAR_MAX));
                    cout<<"\nPrecione enter para regresar ";
                    getch();
                    system("cls");	  
                break;

            case 2:
                mostrarInfo("short int", sizeof(short),
                    numeroATexto(SHRT_MIN) + " a " + numeroATexto(SHRT_MAX),
                    contarCaracteres(SHRT_MAX));
                    cout<<"\nPrecione enter para regresar ";
                    getch();
                    system("cls");
                break;

            case 3:
                mostrarInfo("int", sizeof(int),
                    numeroATexto(INT_MIN) + " a " + numeroATexto(INT_MAX),
                    contarCaracteres(INT_MAX));
                    getch();
                    system("cls");
                break;

            case 4:
                mostrarInfo("long int", sizeof(long),
                    numeroATexto(LONG_MIN) + " a " + numeroATexto(LONG_MAX),
                    contarCaracteres(LONG_MAX));
                    getch();
                    system("cls");
                break;

            case 5:
                mostrarInfo("long long int", sizeof(long long),
                    numeroATexto(LLONG_MIN) + " a " + numeroATexto(LLONG_MAX),
                    contarCaracteres(LLONG_MAX));
                    getch();
                    system("cls");
                break;

            case 6:
                mostrarInfo("float", sizeof(float),
                    numeroATexto(-FLT_MAX) + " a " + numeroATexto(FLT_MAX),
                    contarCaracteres((long long)FLT_MAX));
                    getch();
                    system("cls");
                break;

            case 7:
                mostrarInfo("double", sizeof(double),
                    numeroATexto(-DBL_MAX) + " a " + numeroATexto(DBL_MAX),
                    contarCaracteres((long long)DBL_MAX));
                    getch();
                    system("cls");
                break;

            case 8:
                mostrarInfo("long double", sizeof(long double),
                    "Muy amplio (depende del compilador)",
                    contarCaracteres((long long)LDBL_MAX));
                    getch();
                    system("cls");
                break;

            case 9:
                mostrarInfo("bool", sizeof(bool),
                    "0 (false) a 1 (true)",
                    1);
                    getch();
                    system("cls");
                break;

            case 0:
                cout << "\nSaliendo del programa...\n";
                break;

            default:
                cout << "\nOpcion invalida, intenta de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}
