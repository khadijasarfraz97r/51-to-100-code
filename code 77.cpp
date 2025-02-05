// This program defines a struct called 'Car' with a constructor to initialize its members.
#include <iostream>
using namespace std;

struct Car {
    string make;
    string model;
    int year;

    // Constructor
    Car(string m, string mod, int y) {
        make = m;
        model = mod;
        year = y;
    }
};

int main() {
    Car car1("Toyota", "Camry", 2020);

    cout << "Make: " << car1.make << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;

    return 0;
}
