#include <iostream>
using namespace std;

class Fractales {
public:
    void polvoCantor(int nivel) {
        if(nivel == 0) return;
        cout << "Polvo de Cantor - Nivel " << nivel << "\n";
        polvoCantor(nivel - 1);
    }
    void sierpinski(int fila, int maxFilas) {
        if(fila > maxFilas) return;
        for(int j = 0; j <= fila; j++) {
            if((fila & j) == 0) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
        sierpinski(fila + 1, maxFilas);
    }
};

int main() {
    Fractales f;
    cout << "--- Polvo de Cantor ---\n";
    f.polvoCantor(3);
    cout << "\n--- Triangulo de Sierpinski ---\n";
    f.sierpinski(0, 4);
    return 0;
}