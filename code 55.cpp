// This program calculates and prints the factorial of a given number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Change this value to calculate the factorial of a different number
    long long factorial = 1;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}
