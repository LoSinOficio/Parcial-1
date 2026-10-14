#include <iostream>
#include <string>
using namespace std;

class Persona { public: string nombre; };

class PunteroLista {
public:
    void acceder() {
        Persona lista[2] = {{"Carlos"}, {"Sofia"}};
        Persona *ptr = lista;
        for(int i = 0; i < 2; i++) {
            cout << "Persona " << i + 1 << ": " << (ptr + i)->nombre << "\n";
        }
    }
};

int main() {
    PunteroLista pl;
    pl.acceder();
    return 0;
}