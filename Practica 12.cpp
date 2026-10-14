#include <iostream>
#include <string>
using namespace std;

class Coche { public: string marca; };
class Persona { public: string nombre; Coche autoPersona; };

class ListaPersonas {
public:
    void mostrar() {
        Persona lista[2] = {{"Ana", {"Toyota"}}, {"Luis", {"Nissan"}}};
        for(int i = 0; i < 2; i++) {
            cout << lista[i].nombre << " tiene un auto " << lista[i].autoPersona.marca << "\n";
        }
    }
};

int main() {
    ListaPersonas lp;
    lp.mostrar();
    return 0;
}