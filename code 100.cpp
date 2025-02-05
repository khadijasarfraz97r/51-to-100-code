// This program searches for a given element in a 2D array and displays its position.
#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int element = 5;
    bool found = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == element) {
                cout << "Element " << element << " found at position (" << i << ", " << j << ")" << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        cout << "Element " << element << " not found in the array." << endl;
    }

    return 0;
}
