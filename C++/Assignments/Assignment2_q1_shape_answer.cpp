#include <iostream>
#include <cmath>  // For M_PI
#include <type_traits>  // Required for std::is_abstract

// Abstract base class
class Shape {
protected:
    double area;

public:
    // TO-DO: Please implement the constructor, the destructor and the calArea() function here 

    // Constructor
    Shape() {
        area = 0.0;
        std::cout << "Shape Constructor!" << std::endl;
    }
    
    // Destructor
    virtual ~Shape() {
        std::cout << "Shape Destructor!" << std::endl;
    }
    // When you mark the base destructor as virtual, C++ uses the V-Table (Virtual Table) to determine the actual type of the object at runtime.
    // The program sees you are deleting a Shape*. Because it's virtual, it checks: "What is this actually?"
    // It finds out: "Oh, this is actually a Circle!" It calls the Circle destructor first.
    // After the Circle is destroyed, it automatically calls the Shape destructor.

    // A Simple Rule of Thumb
    // If your class has even one virtual function, or if you ever intend for another class to inherit from it, you MUST make the destructor virtual.

    // Pure virtual function
    virtual void calArea() = 0;
    // When you add = 0 to a virtual function, you are creating a Pure Virtual Function. This changes the entire nature of the class.
    // 1. It Enforces a "Contract" By writing virtual void calArea() = 0;, the Shape class is saying to its children (Circle, Rectangle):
    // "I don't know how to calculate your area—only you know your own math. But I guarantee that anyone who is a Shape must have a calArea function. 
    // If you don't provide one, you aren't allowed to exist."
    // If you create a new class Triangle : public Shape but forget to write a calArea() function inside it, the code will not compile. 
    // This prevents bugs where you accidentally forget to implement essential logic.

    // Member function to get the area
    double getArea() const {
        return area;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // TO-DO: Please implement the constructor, the destructor and OVERRIDE the calArea() function here 
    
    // Constructor
    Circle(double r) : radius(r) {
        std::cout << "Circle Constructor!" << std::endl;
    }
    
    // Destructor
    ~Circle() {
        std::cout << "Circle Destructor!" << std::endl;
    }
    
    // Override calArea function
    void calArea() override {
        area = M_PI * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // TO-DO: Please implement the constructor, the destructor and OVERRIDE the calArea() function here 
    
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {
        std::cout << "Rectangle Constructor!" << std::endl;
    }
    
    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle Destructor!" << std::endl;
    }
    
    // Override calArea function
    void calArea() override {
        area = width * height;
    }
};


int main() {
    std::cout << std::boolalpha; 
    std::cout << "Is Shape abstract? " << std::is_abstract<Shape>::value << std::endl<< std::endl;

    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);
    std::cout<<std::endl;

    shape1->calArea();
    shape2->calArea();

    std::cout << "Area of Circle: " << shape1->getArea() << std::endl;
    std::cout << "Area of Rectangle: " << shape2->getArea() << std::endl;
    std::cout<<std::endl;

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}
