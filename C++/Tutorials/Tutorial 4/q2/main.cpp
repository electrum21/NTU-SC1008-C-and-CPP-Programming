#include <iostream>
#include <string>
#include "Student.h" // important in order to use class Student
using namespace std;


// TODO: Update your implementation for Student Class and Person Class in Question 1 
//       Declare displayInfo() as virtual 

// Derived class: GraduateStudent (inherits from Student)
class GraduateStudent : public Student {
private:
    // TODO: Define the additional attribute (researchTopic)
    string researchTopic;
    
public:
    // TODO: Implement the Constructor
    // FIX: When calling the parent constructor, pass the variables directly.
    // Do not re-declare types like 'string n' inside the initialization list.
    GraduateStudent(string n, int a, int id, string topic) : Student(n, a, id), researchTopic(topic) {};

    // TODO: Implement displayInfo() (Note: it is virtual function in Student)
    // Use 'override' to ensure the compiler verifies this matches the 
    // virtual function originally defined in Person.h.
    void displayInfo() const override { 
        // the override keyword is important for the compiler to flag out an error when you have a virtual function
        // otherwise the code may pass successfully but the outputs may not be what is expected
            Student::displayInfo();
            cout << "Research Topic: " << researchTopic << endl;
    };
};


int main() {
    // 1. Direct object call
    GraduateStudent gs1("Alice", 25, 56789, "Machine Learning");
    gs1.displayInfo();
    cout<<endl;

    // 2. Student pointer (Middle of the hierarchy)
    // Because displayInfo is virtual, it "finds" the GraduateStudent version.
    Student* stu = &gs1;
    stu->displayInfo();
    cout<<endl;

    // 3. Person pointer (Root of the hierarchy)
    // Even from the very top, virtual dispatch ensures the most derived 
    // version (GraduateStudent) is executed.
    Person* per = &gs1;
    per->displayInfo();

    return 0;
}
