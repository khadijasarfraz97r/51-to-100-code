// This program defines a class called 'Course' with a constructor to initialize course details and a destructor to indicate when the course object is destroyed.
#include <iostream>
using namespace std;

class Course {
public:
    string courseName;
    string instructor;
    int duration; // in weeks

    // Constructor
    Course(string name, string inst, int dur) {
        courseName = name;
        instructor = inst;
        duration = dur;
        cout << "Course object created for " << courseName << "." << endl;
    }

    // Destructor
    ~Course() {
        cout << "Course object for " << courseName << " ended." << endl;
    }

    void display() {
        cout << "Course Name: " << courseName << endl;
        cout << "Instructor: " << instructor << endl;
        cout << "Duration: " << duration << " weeks" << endl;
    }
};

int main() {
    Course course1("Introduction to C++", "Dr. Smith", 10);
    course1.display();

    return 0;
}
