// This program defines a class called 'Library' with a constructor to initialize library details and a destructor to indicate when the library object is destroyed.
#include <iostream>
using namespace std;

class Library {
public:
    string name;
    int totalBooks;

    // Constructor
    Library(string n, int books) {
        name = n;
        totalBooks = books;
        cout << "Library object created for " << name << "." << endl;
    }

    // Destructor
    ~Library() {
        cout << "Library object for " << name << " closed." << endl;
    }

    void display() {
        cout << "Library Name: " << name << endl;
        cout << "Total Books: " << totalBooks << endl;
    }
};

int main() {
    Library library1("City Library", 5000);
    library1.display();

    return 0;
}
