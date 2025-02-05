// This program defines a class called 'BankAccount' with a constructor to initialize account details and a destructor to indicate when the account object is destroyed.
#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountHolder;
    int accountNumber;
    double balance;

    // Constructor
    BankAccount(string holder, int number, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        balance = initialBalance;
        cout << "Bank account created for " << accountHolder << "." << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Bank account for " << accountHolder << " closed." << endl;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("John Doe", 12345678, 1000.0);
    account1.display();

    return 0;
}
