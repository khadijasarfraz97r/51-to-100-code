// This program calculates and prints the sum of the first 10 natural numbers using a while loop.
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    while (i <= 10) {
        sum += i;
        i++;
    }
    cout << "Sum of first 10 natural numbers is: " << sum << endl;
    return 0;
}
