#include <iostream>
using namespace std;

void perfectNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    
    if (sum == num) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    perfectNumber();
    return 0;
}