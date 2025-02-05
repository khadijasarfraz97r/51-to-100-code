// This program counts and prints the number of digits in a given number using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int num = 12345; // Change this value to count digits of a different number
    int count = 0;
    do {
        num /= 10;
        count++;
    } while (num != 0);

    cout << "Number of digits: " << count << endl;
    return 0;
}
