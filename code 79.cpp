// This program defines a struct called 'Mobile' with both parameterized and default constructors.
#include <iostream>
using namespace std;

struct Mobile {
    string brand;
    string model;
    float price;

    // Parameterized constructor
    Mobile(string b, string m, float p) {
        brand = b;
        model = m;
        price = p;
    }

    // Default constructor
    Mobile() {
        brand = "Unknown";
        model = "Unknown";
        price = 0.0;
    }
};

int main() {
    Mobile mobile1("Samsung", "Galaxy S21", 799.99);
    Mobile mobile2;

    cout << "Mobile 1 - Brand: " << mobile1.brand << ", Model: " << mobile1.model << ", Price: $" << mobile1.price << endl;
    cout << "Mobile 2 - Brand: " << mobile2.brand << ", Model: " << mobile2.model << ", Price: $" << mobile2.price << endl;

    return 0;
}
