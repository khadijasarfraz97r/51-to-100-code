// This program prints even numbers from 1 to 20 using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 2;
    do {
        cout << i << " ";
        i += 2;
    } while (i <= 20);
    cout << endl;
    return 0;
}
