// This program defines a struct called 'Laptop' with a default constructor to initialize its members.
#include <iostream>
using namespace std;

struct Laptop {
    string brand;
    string model;
    float price;

    // Default constructor
    Laptop() {
        brand = "Unknown";
        model = "Unknown";
        price = 0.0;
    }
};

int main() {
    Laptop laptop1;

    cout << "Brand: " << laptop1.brand << endl;
    cout << "Model: " << laptop1.model << endl;
    cout << "Price: $" << laptop1.price << endl;

    return 0;
}
