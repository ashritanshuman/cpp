#include <iostream>
using namespace std;
class Student {
protected:
 int m1, m2, m3;
public:
 void getMarks() {
 cin >> m1 >> m2 >> m3;
 }
};
class Result : public Student {
public:
 void display() {
 int total = m1 + m2 + m3;
 float per = total / 3.0;
 cout << "Total: " << total << endl;
 cout << "Percentage: " << per << endl;
 }
};
int main() {
 Result r;
 r.getMarks();
 r.display();
 return 0;
}