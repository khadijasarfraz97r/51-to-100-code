// This program defines a class called 'Fraction' to represent and manage fractions.
#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        cout << "Fraction created: " << numerator << "/" << denominator << endl;
    }

    // Destructor
    ~Fraction() {
        cout << "Fraction destroyed: " << numerator << "/" << denominator << endl;
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction frac1(3, 4);
    frac1.display();

    return 0;
}
