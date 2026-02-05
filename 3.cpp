#include <iostream>
using namespace std;


void sumSeries() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    
    int sum = 0;
    int num = 0;
    
    for (int i = 1; i <= n; i++) {
        num = num * 10 + 1;
        sum = sum + num;
    }
    
    cout << "Sum: " << sum << endl;
}

int main() {
    sumSeries();
    return 0;
}