#include <iostream>
using namespace std;

class VisitorCounter {
private:
    int* count;  // Pointer to dynamically allocated memory for visit count

public:
    VisitorCounter(int initialCount) {
        count = new int(initialCount);
        cout << "Constructor called with the count as " << *count << endl;
    }

    // The Essential Fix: User-Defined Copy Constructor (Deep Copy) rather than the default constructor
    VisitorCounter(const VisitorCounter& other) {
        count = new int(*(other.count));
        cout << "Copy Constructor called with the count as " << count << "(Deep Copy).\n" ;
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

    // Now this copies the deep constructor
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