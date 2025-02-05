// This program defines a class called 'Student' with a constructor to initialize student details and a destructor to indicate when the student object is destroyed.
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks;

    // Constructor
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
        cout << "Student object created for " << name << "." << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student object for " << name << " destroyed." << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1("Alice", 101, 92.5);
    student1.display();

    return 0;
}
