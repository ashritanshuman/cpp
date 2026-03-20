#include <iostream>
using namespace std;

void electricityBill() {
    int units;
    float bill = 0;
    
    cout << "Enter units consumed: ";
    cin >> units;
    
    if (units < 200) {
        bill = units * 1.20f;
    } else if (units < 400) {
        bill = units * 1.50f;
    } else if (units < 600) {
        bill = units * 1.80f;
    } else {
        bill = units * 2.00f;
    }
    
    if (bill > 400) {
        bill = bill + (bill * 0.15);
    }
    
    if (bill < 100) {
        bill = 100;
    }
    
    cout << "Total Bill: " << bill << endl;
}

int main() {
    electricityBill();
    return 0;
}