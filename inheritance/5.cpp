#include <iostream>
using namespace std;
class Vehicle {
protected:
 float fuel;
public:
 void setFuel(float f) {
 fuel = f;
 }
};
class Car : public Vehicle {
public:
 void mileage() {
 cout << "Car Mileage: " << fuel * 15 << endl;
 }
};
class Bike : public Vehicle {
public:
 void mileage() {
 cout << "Bike Mileage: " << fuel * 40 << endl;
 }
};
int main() {
 Car c;
 Bike b;
 c.setFuel(10);
 b.setFuel(10);
 c.mileage();
 b.mileage();
 return 0;
}