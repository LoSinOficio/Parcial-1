#include <iostream>
using namespace std;

class RecursividadCalc {
public:
    int factorial(int n) {
        return (n <= 1) ? 1 : n * factorial(n - 1);
    }
    int fibonacci(int n) {
        return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
    }
    // Multiplicación por sumas sucesivas recursivas
    int sumaSucesiva(int a, int b) {
        if(b == 0) return 0;
        return a + sumaSucesiva(a, b - 1);
    }
};

int main() {
    RecursividadCalc rc;
    cout << "Factorial de 5: " << rc.factorial(5) << "\n";
    cout << "Fibonacci de 6: " << rc.fibonacci(6) << "\n";
    cout << "Multiplicacion (4 * 3) por sumas sucesivas: " << rc.sumaSucesiva(4, 3) << "\n";
    return 0;
}