#include <iostream>

using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int main() {
    int res = sumar(5, 3);
    cout << "La suma es: " << res << endl;
    return 0;
}

