// This program defines a struct called 'Book' and passes it to a function to print book details.
#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

void printBookDetails(Book book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
}

int main() {
    Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925};

    printBookDetails(book1);

    return 0;
}
