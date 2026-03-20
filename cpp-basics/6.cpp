#include <iostream>
using namespace std;

int main() {
    int n = 3; // middle width control

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int s = n; s > i; s--)
            cout << "  ";

        for (int j = 1; j <= i; j++)
            cout << "*   ";

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = n; s > i; s--)
            cout << "  ";

        for (int j = 1; j <= i; j++)
            cout << "*   ";

        cout << endl;
    }

    return 0;
}