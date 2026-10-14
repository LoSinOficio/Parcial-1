#include <iostream>

using namespace std;

class BaseCalc {
public:
    virtual int operar(int a, int b) {
        return a + b;
    }
};

class CalcAvanzada : public BaseCalc {
public:
    int multiplicar(int a, int b) {
        int res = 0;
        for(int i = 0; i < b; i++) {
            res += a;
        }
        return res;
    }

    int potencia(int base, int exp) {
        int res = 1;
        for(int i = 0; i < exp; i++) {
            res = multiplicar(res, base);
        }
        return res;
    }

    int dividir(int a, int b) {
        int cont = 0;
        while(a >= b) {
            a -= b;
            cont++;
        }
        return cont;
    }
};

int main() {
    CalcAvanzada calc;
    cout << "Multiplicacion (sumas sucesivas) 4x3: " << calc.multiplicar(4, 3) << endl;
    cout << "Potencia (multiplicaciones sucesivas) 2^3: " << calc.potencia(2, 3) << endl;
    cout << "Division (restas sucesivas) 10/3: " << calc.dividir(10, 3) << endl;
    return 0;
}
