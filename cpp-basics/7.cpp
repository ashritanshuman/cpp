#include <iostream>
using namespace std;    

void factorial() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Invalid number" << endl;
        return;
    }
    
    int fact = 1;
    int i = 1;
    
    do {
        fact = fact * i;
        i++;
    } while (i <= num);
    
    cout << "Factorial: " << fact << endl;
}


int main() {
    factorial();
    return 0;
}