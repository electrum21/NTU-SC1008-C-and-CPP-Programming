#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    Student s1("Alice", 20, 12345);
    s1.displayInfo();
    cout<<endl;

    // Base class pointer points to the derived class object
    Person* p = &s1;

    // Call displayInfo() using the base class pointer.
    // Here displayInfo() is not declared as virtual in Person 
    // (redefining the base class function, not function overriding)
    // the Person version will be called
    p->displayInfo();
    
    return 0;
}
