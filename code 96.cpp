// This program calculates and displays the sum of all elements in a 2D array.
#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements in the 2D array: " << sum << endl;
    return 0;
}
