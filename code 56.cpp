// This program prints the Fibonacci series up to N terms using a while loop.
#include <iostream>
using namespace std;

int main() {
    int n = 10; // Change this value to get more or fewer terms in the Fibonacci series
    int t1 = 0, t2 = 1, nextTerm, count = 2;

    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    
    while (count < n) {
        nextTerm = t1 + t2;
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        count++;
    }
    cout << endl;
    return 0;
}
