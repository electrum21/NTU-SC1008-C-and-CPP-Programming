///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//
#include <iostream>

class Complex {
    private:
        double real;
        double imag;

    public:
        // Constructor
        Complex(double r, double i) : real(r), imag(i) {}

        // Overloading the + operator
        // TODO: Write Your Code Here
        Complex operator+(const Complex &other) const{
            return Complex(real + other.real, imag + other.imag);
        }

        // Overloading the - operator
        // TODO: Write Your Code Here
        Complex operator-(const Complex &other) const{
            return Complex(real - other.real, imag - other.imag);
        }


        // Overloading the << operator for output
        friend std::ostream& operator<<(std::ostream& out, const Complex& c) {
            // TODO: Write Your Code Here
            if (c.real == static_cast<int>(c.real)){ // check if the double input matches int conversion 
                out << static_cast<int>(c.real);
            } else {
                out << c.real;
            }

            if (c.imag >= 0){
                out << " + ";
                if(c.imag == static_cast<int>(c.imag)){ // checks for the sign of the imaginary part as well as if decimal can be removed
                    out << static_cast<int>(c.imag); // check if the double input matches int conversion
                } else{
                    out << c.imag;
                }
            } else {
                out << " - ";
                if(-c.imag == static_cast<int>(-c.imag)){
                    out << static_cast<int>(-c.imag);
                } else{
                    out << -c.imag;
                }
            }

            out << "i";

            return out;
        }
};

int main() {
    Complex c1(3.5, 2.0);
    Complex c2(1.5, 4.0);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    std::cout << "First Complex Number: " << c1 << std::endl;
    std::cout << "Second Complex Number: " << c2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    return 0;
}
