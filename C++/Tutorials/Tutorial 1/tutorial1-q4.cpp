#include <iostream>
using namespace std;

//The primary purpose of a union is to save space.
// In a struct, every member gets its own separate slot in memory.
// In a union, all members share the same slot. The size of the union is only as large as its largest member.
// Mutually Exclusive Data
// In your student program, a student has either a numeric mark (like 85) or a letter grade (like 'A'). 
// They never have both at the exact same time for the same entry.
// If you assign res.mark = 90, the memory holds that integer.
// If you then assign res.grade = 'A', it overwrites the memory where the 90 was.
union Result {
    int mark;
    char grade; // Can be only 'A', 'B' or 'C'
};

struct Student {
    char studentName[50];
    bool isGrade;
    int finalMark; // Used to store the final mark
    Result res;

    void convertGrade() { // A=90 , B=80, C=60
        // TO-DO: Write your functions here
        if (isGrade){
            switch(res.grade){
                case 'A':
                    finalMark = 90;
                    break;
                case 'B':
                    finalMark = 80;
                    break;
                case 'C':
                    finalMark = 60;
                    break;
                default:
                    finalMark = 0;
                    break;
            }
        } else {
            finalMark = res.mark;
        }
    }
};

void displayStudentInfo(Student *students, int count) {
    // TO-DO: Write your functions here
    int totalMarks = 0;
    
    cout << "\nStudent Results: " << endl;
    for (int i = 0; i < count; i++){
        cout << "Name: " << students[i].studentName << ", Final Mark: " << students[i].finalMark << endl;
        totalMarks += students[i].finalMark;
    }

    float average = (float) totalMarks / count; // Type conversion
    cout << "\nAverage Final Mark: " << average << endl;

}

int main() {
    // TO-DO: Write your functions here
    int numStudents;

    cout << "How many students do you want to input?" <<endl;
    cout << "Enter student size: ";
    cin >> numStudents;
    cin.get(); // To clear the newline character

    Student *students = new Student[numStudents]; // Dynamic memory

    for (int i= 0; i < numStudents; i++) {
        cout << "Enter student name: ";
        cin.getline(students[i].studentName, 50); // Read the whole line

        char resultType;
        cout << "Enter 'G' if result is grade or 'M' if result is mark: ";
        cin >> resultType;

        if (resultType == 'G' || resultType == 'g'){
            students[i].isGrade = true;
            cout << "Enter grade (A, B, C); ";
            cin >> students[i].res.grade;
        } else {
            students[i].isGrade = false;
            cout << "Enter mark (0-100): ";
            cin >> students[i].res.mark;
        }
        cin.get(); // To clear the newline character IMPORTANT

        students[i].convertGrade(); // Convert the grade or mark to finalMark
    }

    displayStudentInfo(students, numStudents);
    delete[] students; // Free allocated memory
    students = nullptr; // Prevent dangling pointer
    return 0;
}