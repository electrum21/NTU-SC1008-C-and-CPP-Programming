#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

class Student : public Person {
private:
    // TODO: Define the additional attribute (studentID), studentID is an integer
    int studentID;
    
public:
    // Constructor declaration
    Student(string n, int a, int id);

    // Function to display student details (redefine base class function)
    // override: Explicitly tells the compiler this is intended to 
    // replace the base class version. If the signatures don't match 
    // (e.g., if you forgot 'const'), the compiler will throw an error.
    void displayInfo() const;
};

#endif // STUDENT_H