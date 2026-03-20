#include <iostream>
using namespace std;
class Shape {
public:
 virtual void area() = 0;
};
class Rectangle : public Shape {
 float l, b;
public:
 Rectangle(float x, float y) {
 l = x; b = y;
 }
 void area() {
 cout << "Rectangle Area: " << l * b << endl;
 }
};
class Circle : public Shape {
 float r;
public:
 Circle(float x) {
 r = x;
 }
 void area() {
 cout << "Circle Area: " << 3.14 * r * r << endl;
 }
};

int main() {
 Rectangle r(5, 4);
 Circle c(3);
 r.area();
 c.area();
 return 0;
}