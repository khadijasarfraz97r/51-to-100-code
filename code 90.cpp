// This program defines a class called 'Point' with a constructor to initialize point coordinates and a destructor to indicate when the point object is destroyed.
#include <iostream>
using namespace std;

class Point {
public:
    int x;
    int y;

    // Constructor
    Point(int xCoord, int yCoord) {
        x = xCoord;
        y = yCoord;
        cout << "Point object created." << endl;
    }

    // Destructor
    ~Point() {
        cout << "Point object destroyed." << endl;
    }

    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point point1(3, 4);
    point1.display();

    return 0;
}
