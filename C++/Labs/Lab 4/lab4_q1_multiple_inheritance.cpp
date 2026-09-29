#include <iostream>
#include <string>
using namespace std;
// Base class: Sports
class Sports {
protected:
    string sport; // sport name
public:
    // TO-DO 1: Implement the constructor and descructor
    Sports(string s) : sport (s) {
        cout << "Sports constructor!" << endl;
    }

    ~Sports() {
        cout << "Sports destructor!" << endl;
    }

    // Display sports information
    void displaySports() const {
        cout << "Sport: " << sport << endl;
    }
};

// Base class: Academics
class Academics {
protected:
    float gpa; // GPA
public:
    // TO-DO 2: Implement the constructor and destructor
    Academics(float g) : gpa(g) {
        cout << "Academics constructor!" << endl;
    }

    ~Academics(){
        cout << "Academics destructor!" << endl;
    }

    // Display academic information
    void displayAcademics() const {
        cout << "GPA: " << gpa << endl;
    }

};

// TO-DO 3: Implement the Derived class: StudentAthlete, which inherits from both Academics and Sports
class StudentAthlete : public Sports, public Academics { // Note that the order in which the classes are called matters in terms of output being printed
protected:
    string name;
    int age;
    int studentID;
public:

    StudentAthlete(string s, float g, string n, int a, int id) : Sports(s), Academics(g), name(n), age(a), studentID(id) {
        cout << "StudentAthlete constructor!" << endl;
    }  

    ~StudentAthlete() {
        cout << "StudentAthlete destructor!" << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << endl;
        Sports::displaySports();
        Academics::displayAcademics();
    }
};

int main() {
    cout << "Enter name, age, student ID, sports, and GPA:" << endl;

    string name, sports;
    int age, id;
    double gpa;

    cin >> name >> age >> id >> sports >> gpa;

    //Create a StudentAthlete instance
    StudentAthlete stu(sports, gpa, name, age, id);

    // Display all the information
    cout<<endl;
    stu.displayInfo();
    cout<<endl;
    
    // Test code to demonstrate multiple inheritances
    stu.displaySports();
    stu.displayAcademics();
    cout<<endl;
    
    return 0;
}