#include <iostream>
using namespace std;
class Employee {
protected:
 float salary;
public:
 void setSalary(float s) {
 salary = s;
 }
};
class Manager : public Employee {
public:
 float totalSalary() {
 return salary + (0.20 * salary);
 }
};
class Engineer : public Employee {
public:
 float totalSalary() {
 return salary + (0.10 * salary);
 }
};
int main() {
 Manager m;
 Engineer e;
 m.setSalary(50000);
e.setSalary(40000);
 cout << "Manager Total Salary: " << m.totalSalary() << endl;
 cout << "Engineer Total Salary: " << e.totalSalary() << endl;
 return 0;
}   

// 
// 
// g++ 1.cpp -o 1
// ./1