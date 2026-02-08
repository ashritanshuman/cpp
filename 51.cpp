#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    int marks;

public:
    // Method to input student details
    void input() {
        cin >> roll >> name >> marks;
    }
    
    // Method to display student details
    void display() {
        cout << "Roll:" << roll << " Name:" << name << " Marks:" << marks << endl;
    }
};

int main() {
    Student student1, student2;
    
    // Input for first student
    student1.input();
    student1.display();
    
    // Input for second student
    student2.input();
    student2.display();
    
    return 0;
}