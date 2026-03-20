#include <iostream>
using namespace std;
class Customer {
protected:
 float amount;
public:
 void setAmount(float a) {
 amount = a;
 }
};
class Regular : public Customer {
public:
 void finalAmount() {
 cout << "Regular Customer Pay: " << amount - (0.05 * amount) << endl;
 }
};
class Premium : public Customer {
public:
 void finalAmount() {
 cout << "Premium Customer Pay: " << amount - (0.15 * amount) << endl;
 }
};
int main() {
 Regular r;
 Premium p;
 r.setAmount(2000);
 p.setAmount(2000);
 r.finalAmount();
 p.finalAmount();
 return 0;
}