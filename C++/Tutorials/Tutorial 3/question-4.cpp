#include <iostream>

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize the box dimensions
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Member function that can access the private members
    void calculateVolume() {
        // Caclulate and display the volume of the box
        double volume = length * width * height;
        std::cout << "Box Volume: " << volume << " cubic units";
    }

    // Declare a friend function to display private members
    friend void displayDimensions(const Box& b);

};


// Define the friend function (that can access private members of Box)
// Note: No "friend" keyword here, and no "Box::" prefix!
void displayDimensions(const Box& b) {
    std::cout << "Box Dimensions:\n";
    std::cout << "Length: " << b.length << "\n";
    std::cout << "Width: " << b.width << "\n";
    std::cout << "Height: " << b.height << "\n\n";
}

int main() {
    // Creating a Box object
    Box myBox(5.0, 3.0, 2.0);

    // Friend function accessing private data
    displayDimensions(myBox);

    // Member function accessing private data
    myBox.calculateVolume();

    return 0;
}
