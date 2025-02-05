// This program defines nested structs called 'Address' and 'Employee' and uses them to store and print information about an employee.
#include <iostream>
using namespace std;

struct Address {
    string street;
    string city;
    string state;
    int zipCode;
};

struct Employee {
    string name;
    int employeeId;
    Address address;
};

int main() {
    Employee employee1 = {"David Smith", 201, {"123 Main St", "Springfield", "IL", 62704}};

    cout << "Name: " << employee1.name << endl;
    cout << "Employee ID: " << employee1.employeeId << endl;
    cout << "Address: " << employee1.address.street << ", " << employee1.address.city << ", " << employee1.address.state << ", " << employee1.address.zipCode << endl;

    return 0;
}
