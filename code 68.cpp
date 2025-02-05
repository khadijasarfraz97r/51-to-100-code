// This program finds and prints the second largest element in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        cout << "Array needs to have at least two elements." << endl;
        return 0;
    }

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Second largest element in the array is: " << second << endl;
    }

    return 0;
}
