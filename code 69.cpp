// This program merges two arrays into a third array and prints the merged array.
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;
    int arr3[n3];

    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < n3; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
