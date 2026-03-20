#include <iostream>
using namespace std;

void sumDigits() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int original = num;
    int sum = 0;
    
    while (num > 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    
    cout << "Sum of the digits " << original << " = " << sum << endl;
}




int main() {
    sumDigits();
    return 0;
}