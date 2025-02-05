// This program finds and displays the maximum element in a 2D array.
#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int maxElement = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    cout << "Maximum element in the 2D array: " << maxElement << endl;
    return 0;
}
