#include <iostream> 
using namespace std; 
// TO-DO: Write your functions here 

double calArea(double side);
double calArea(double length, double width);
double calArea(double base1, double base2, double height);
int main() {     // Test cases     
    int side1 = 5; 
    std::cout << "Area of Square: " << calArea(side1) << "\n";     
    double side2 = 11.11; 
    std::cout << "Area of Square: " << calArea(side2) << "\n"; 
 
    int length1 = 10, width1 = 20; 
    std::cout << "Area of Rectangle: " << calArea(length1, width1) << "\n";     
    float length2 = 23.4, width2 = 10.8;     
    std::cout << "Area of Rectangle: " << calArea(length2, width2) << "\n"; 
 
    long b1 = 20, b2 = 40, height = 10;  
    std::cout << "Area of Trapezoid: " << calArea(b1, b2, height) << "\n"; 
     return 0; 
} 


double calArea(double side) {
    return side * side;
}

double calArea(double length, double width) {
    return length * width;
}

double calArea(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}