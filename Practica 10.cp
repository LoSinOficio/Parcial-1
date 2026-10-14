#include <iostream>
using namespace std;

class PromedioPuntero {
    int nums[5];
public:
    void ejecutar() {
        int *p = nums;
        int suma = 0;
        cout << "Ingresa 5 numeros:\n";
        for(int i = 0; i < 5; i++) {
            cin >> *(p + i);
            suma += *(p + i);
        }
        int maxVal = *p, minVal = *p;
        for(int i = 0; i < 5; i++) {
            if(*(p + i) > maxVal) maxVal = *(p + i);
            if(*(p + i) < minVal) minVal = *(p + i);
        }
        cout << "Suma: " << suma << " | Promedio: " << (suma / 5.0) 
             << " | Max: " << maxVal << " | Min: " << minVal << "\n";
    }
};

int main() {
    PromedioPuntero obj;
    obj.ejecutar();
    return 0;
}
