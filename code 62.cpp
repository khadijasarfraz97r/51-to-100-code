// This program prints numbers from 10 to 1 using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 10;
    do {
        cout << i << " ";
        i--;
    } while (i >= 1);
    cout << endl;
    return 0;
}
