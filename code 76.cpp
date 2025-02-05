// This program defines a struct called 'Point' and returns it from a function to represent a point in 2D space.
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

Point createPoint(int x, int y) {
    Point point;
    point.x = x;
    point.y = y;
    return point;
}

int main() {
    Point point1 = createPoint(5, 10);

    cout << "Point coordinates: (" << point1.x << ", " << point1.y << ")" << endl;

    return 0;
}
