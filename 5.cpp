#include <iostream>
using namespace std;

void primeNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num <= 1) {
        cout << "NOT PRIME" << endl;
        return;
    }
    
    int isPrime = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime == 1) {
        cout << "PRIME" << endl;
    } else {
        cout << "NOT PRIME" << endl;
    }
}

int main() {
    primeNumber();
    return 0;
}