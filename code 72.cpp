// This program defines a struct called 'Student' and uses it to store and print information about multiple students using an array.
#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student students[3];

    students[0] = {"Alice", 101, 85.5};
    students[1] = {"Bob", 102, 90.0};
    students[2] = {"Charlie", 103, 92.5};

    for (int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber << ", Marks: " << students[i].marks << endl;
    }

    return 0;
}
