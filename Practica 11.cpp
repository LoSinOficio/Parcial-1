#include <iostream>
using namespace std;

class Matrices {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{2, 0}, {1, 2}};
public:
    void resolver() {
        int c = 3;
        cout << "--- Matriz A * Constante (" << c << ") ---\n";
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) cout << A[i][j] * c << " ";
            cout << "\n";
        }
        cout << "--- Multiplicacion A * B ---\n";
        int R[2][2] = {0};
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                for(int k = 0; k < 2; k++) R[i][j] += A[i][k] * B[k][j];
        
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) cout << R[i][j] << " ";
            cout << "\n";
        }
    }
};

int main() {
    Matrices m;
    m.resolver();
    return 0;
}
