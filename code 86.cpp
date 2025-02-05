// This program defines a class called 'Book' with a constructor to initialize book details and a destructor to indicate when the book object is destroyed.
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    // Constructor
    Book(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
        cout << "Book object created for \"" << title << "\"." << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book object for \"" << title << "\" destroyed." << endl;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    book1.display();

    return 0;
}
