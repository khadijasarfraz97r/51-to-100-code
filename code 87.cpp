// This program defines a class called 'Rectangle' with a constructor to initialize rectangle dimensions and a destructor to indicate when the rectangle object is destroyed.
#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float width;

    // Constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Rectangle object created." << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    cout << "Length: " << rect.length << endl;
    cout << "Width: " << rect.width << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}
