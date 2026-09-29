#include <iostream>
#include <string>

class Pen {
private:
    std::string color;
    double price;

public:
    Pen(std::string initialColor, double initialPrice) {
        color = initialColor;
        price = initialPrice;
    }

    Pen& setColor(std::string newColor) {
        color = newColor;
        return *this; // Because you return *this: 
        // You are returning the pointer pointing to the current Pen object.  
        // This allows the next method in the chain to immediately grab that object and run its own code.
        // If you returned "this": 
        // You would be trying to return a memory address (a pointer). 
        // Since the function expects a reference (the object itself), the compiler would throw an error saying "cannot convert Pen* to Pen&".
    }

    Pen& setPrice(double newPrice) {
        price = newPrice;
        return *this;
    }

    void display() const {
        std::cout << "Pen Color: " << this->color << "\n";
        std::cout << "Price: $" << this->price << "\n";
    }
};

int main() {
    // Creating a Pen object and using method chaining
    Pen myPen("Blue", 1.5);
    std::cout<< "The original color and price of the pen: " << std::endl;
    myPen.display();
    
    std::cout<< std::endl<<"The color and price of the pen after setting: " << std::endl;
    myPen.setColor("Red")
         .setPrice(2.0)
         .display();

    return 0;
}
