#include <iostream>

using namespace std;

// Sin parametros
void mostrar() {
    cout << "Sin parametros" << endl;
}

// Con 2 parametros
void mostrar(int a, int b) {
    cout << "Suma 2 parametros: " << a + b << endl;
}

// Con 3 parametros
void mostrar(int a, int b, int c) {
    cout << "Suma 3 parametros: " << a + b + c << endl;
}

int main() {
    mostrar();
    mostrar(2, 3);
    mostrar(1, 2, 3);
    return 0;
    
}
