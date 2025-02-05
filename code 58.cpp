// This program calculates and prints the sum of the first 10 natural numbers using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    cout << "Sum of first 10 natural numbers is: " << sum << endl;
    return 0;
}
