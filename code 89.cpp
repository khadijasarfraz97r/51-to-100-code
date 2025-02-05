// This program defines a class called 'Employee' with a constructor to initialize employee details and a destructor to indicate when the employee object is destroyed.
#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int employeeId;
    double salary;

    // Constructor
    Employee(string n, int id, double s) {
        name = n;
        employeeId = id;
        salary = s;
        cout << "Employee object created for " << name << "." << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Employee object for " << name << " destroyed." << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1("David Smith", 1001, 75000.0);
    emp1.display();

    return 0;
}
