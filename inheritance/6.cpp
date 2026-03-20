#include <iostream>
using namespace std;
class Library {
protected:
 int days;
public:
 void setDays(int d) {
 days = d;
 }
};
class Student : public Library {
public:
 void fine() {
 cout << "Student Fine: " << days * 2 << endl;
 }
};
class Faculty : public Library {
public:
 void fine() {
 cout << "Faculty Fine: " << days * 1 << endl;
 }
};
int main() {
 Student s;
 Faculty f;
 s.setDays(5);
 f.setDays(5);
 s.fine();
 f.fine();
 return 0;
}