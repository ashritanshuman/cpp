#include <iostream>
using namespace std;

void starPattern() {
    // Upper half
    for (int i = 1; i <= 5; i = i + 2) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = 3; i >= 1; i = i - 2) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    starPattern();
    return 0;
}