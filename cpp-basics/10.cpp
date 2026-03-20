#include <iostream>
using namespace std;
void diagonalMatrix() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    
    int matrix[10][10];
    
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Diagonal Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main() {
    diagonalMatrix();
    return 0;
}