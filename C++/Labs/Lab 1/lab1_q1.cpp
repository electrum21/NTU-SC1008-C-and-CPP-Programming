#include <iostream>
#include <limits>
#include <cstring>
using namespace std;
// Function to get a valid integer input
int getValidInt() {
    // TO-DO: WRITE Your code here
    int value;
    while (true) {
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // standard way in C++ to clear the input buffer. 
            // It is often used after a failed input attempt (like when a user types a word instead of a number) or to "flush" the remaining characters 
            // in a line so they don't interfere with the next cin statement.
            cout << "Invalid input! Please enter an integer: " << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

// Function to get a valid float input
float getValidFloat() {
    // TO-DO: WRITE Your code here
    float value;
    while (true) {
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // standard way in C++ to clear the input buffer. 
            // It is often used after a failed input attempt (like when a user types a word instead of a number) or to "flush" the remaining characters 
            // in a line so they don't interfere with the next cin statement.
            cout << "Invalid input! Please enter a valid float number: " << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}
int main() {
    char name[50];  // Student name
    int studentID;  // Student ID
    float mathMark; // Math mark

    while (true) {
        // Get student name
        cout << "Enter student name (or enter '#' to exit):" << std::endl;
        cin.getline(name, 50);

        // Check if user wants to exit
        if (strcmp(name, "#") == 0) {
            break;
        }

        // Get student ID
        cout << "Enter student ID (integer):" << std::endl;
        studentID = getValidInt();

        // Get math mark
        cout << "Enter math mark (float):" << std::endl;
        mathMark = getValidFloat();

        // Display student information
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Math Mark: " << mathMark << endl;
        cout << "-------------------------\n";
    }

    cout << "Program exited successfully." << endl;
    return 0;
}
