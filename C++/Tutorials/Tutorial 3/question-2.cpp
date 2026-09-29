#include <iostream>
using namespace std;

class VisitorCounter {
private:
    int* count;  // Pointer to dynamically allocated memory for visit count

public:
    VisitorCounter(int initialCount) {
        count = new int(initialCount); // creates an integer variable
        cout << "Constructor called with the count as " << *count << endl;
    }

    ~VisitorCounter() {
        cout << "Destructor called with the count being " << *count << endl;
        delete count;
    }

    void increment() {
        (*count)++;
    }

    void display() const {
        cout << "Visitor Count: " << *count << endl;
    }
};

int main() {
    VisitorCounter counter(10);
    cout << "\nOriginal Counter:\n";
    counter.display();

    // Copy the counter
    // Q1: this is a shallow copy of the original counter
    // when the program ends, the destructor runs automatically.
    // since there are 2 copies pointing to the same object,
    // that object gets destructed/freed 2 times,
    // so the final count will be incorrect
    
    VisitorCounter counterCopy = counter; 
    cout << "counterCopy:\n";
    counterCopy.display();

    // Increase copied object's count
    counterCopy.increment();
    counterCopy.increment();
    cout << "\nAfter modifying copied counter...\n";
    cout << "Original Counter: "<<endl;
    counter.display();
    cout << "counterCopy: "<<endl;
    counterCopy.display(); 
    cout <<endl <<endl;

    return 0;
}