#include <iostream>
using namespace std;

class Car {
public:
    string make;
    string model;
    int year;

    // Constructor
    Car(string m, string mod, int y) {
        make = m;
        model = mod;
        year = y;
        cout << "Car object created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car object destroyed." << endl;
    }

    void display() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", "Camry", 2020);
    car1.display();

    return 0;
}
