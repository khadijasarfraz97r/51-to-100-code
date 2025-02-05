// This program defines a struct called 'Rectangle' with member functions to calculate area and perimeter.
#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect = {5.0, 3.0};

    cout << "Length: " << rect.length << endl;
    cout << "Width: " << rect.width << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}
