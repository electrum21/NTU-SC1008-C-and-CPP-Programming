#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    // TODO: Define the member variables (name and age, which are string and integer)
    string name;
    int age;

public:
    // Constructor declaration
    Person(string n, int a);

    // Function to display person details
    // non-virtual: Tells the compiler to use "Static Binding."
    // because it is redefine, not override
    void displayInfo() const;
};

#endif // PERSON_H