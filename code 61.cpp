// This program calculates and prints the sum of all elements in an array using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int i = 0;
    do {
        sum += arr[i];
        i++;
    } while (i < n);
    cout << "Sum of elements in the array is: " << sum << endl;
    return 0;
}
