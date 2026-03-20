#include <iostream>
using namespace std;

void evenOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (cin.fail()) {
        cout << "Re-Input as integer number" << endl;
    } else if (cin.peek() != '\n' && cin.peek() != EOF) {
        cout << "Re-Input as integer number" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    } else if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    evenOdd();
    return 0;
}

// g++ 1.cpp -o 1 && ./1