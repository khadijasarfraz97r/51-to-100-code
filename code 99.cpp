// This program calculates and displays the sum of each column in a 2D array.
#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
