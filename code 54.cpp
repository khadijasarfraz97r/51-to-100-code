// This program prints the multiplication table of a given number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Change this value to get the multiplication table of a different number
    int i = 1;
    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}
