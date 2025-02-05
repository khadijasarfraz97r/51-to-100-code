// This program defines a class called 'Time' to represent and manage time in hours, minutes, and seconds.
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        cout << "Time object created: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Destructor
    ~Time() {
        cout << "Time object destroyed: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time t1(12, 30, 45);
    t1.display();

    return 0;
}
