/*
 * Detector de tipo de dato en C++ (version mejorada)
 * ------------------------------------------------------------
 * El usuario escribe un valor y el programa determina si
 * corresponde a bool, char, int, double o string, y muestra
 * la sintaxis correcta en C++ para declararlo.
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string entrada;

    cout << "====================================" << endl;
    cout << " DETECTOR DE TIPO DE DATO Y SINTAXIS" << endl;
    cout << "====================================" << endl;
    cout << "Escribe un valor (ej: 25, 3.14, a, true, Hola): ";

    getline(cin, entrada);

    cout << endl << "Valor ingresado : " << entrada << endl;
    cout << "------------------------------------" << endl;

    if (entrada == "true" || entrada == "false") {
        // Es booleano
        cout << "Tipo detectado  : bool" << endl;
        cout << "Sintaxis en C++ : bool variable = " << entrada << ";" << endl;
    }
    else if (entrada.size() == 1) {
        // Es un solo caracter
        cout << "Tipo detectado  : char" << endl;
        cout << "Sintaxis en C++ : char variable = '" << entrada << "';" << endl;
    }
    else {
        // Intentamos convertirlo a numero entero
        stringstream ss(entrada);
        int numero;
        ss >> numero;

        if (!ss.fail() && ss.eof() && entrada.find('.') == string::npos) {
            cout << "Tipo detectado  : int" << endl;
            cout << "Sintaxis en C++ : int variable = " << entrada << ";" << endl;
        }
        else {
            // Intentamos convertirlo a numero decimal
            stringstream ss2(entrada);
            double decimal;
            ss2 >> decimal;

            if (!ss2.fail() && ss2.eof()) {
                cout << "Tipo detectado  : double" << endl;
                cout << "Sintaxis en C++ : double variable = " << entrada << ";" << endl;
            }
            else {
                // No es numero ni booleano ni un solo caracter -> texto
                cout << "Tipo detectado  : string" << endl;
                cout << "Sintaxis en C++ : string variable = \"" << entrada << "\";" << endl;
            }
        }
    }

    cout << "------------------------------------" << endl;
    system("pause");
    return 0;
}
