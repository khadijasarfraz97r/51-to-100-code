// This program defines a struct called 'Person' and uses it to store and print information about a person.
#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person person1;
    person1.name = "John Doe";
    person1.age = 30;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;

    return 0;
}
