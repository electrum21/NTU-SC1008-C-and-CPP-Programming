///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//

#include <iostream>
#include <string>
using namespace std;

class Product {
    private:
        string name;
        double price;

    public:
        // Constructor
        Product(string productName, double productPrice) {
            //TO-DO: Write Your Code Here
            name = productName;
            price = productPrice;
            cout << "Product created: " << name << " ($" << price << ")" << endl;

        }

        // Destructor
        //TO-DO: Write Your Code Here
        ~Product(){};

        // Getters
        //TO-DO: Write Your Code Here
        string getName(){
            return name;
        }

        double getPrice(){
            return price;
        }


        // Setter for price (ensures non-negative value)
        void setPrice(double newPrice) {
            //TO-DO: Write Your Code Here
            if (newPrice >= 0){
                price = newPrice;
            } else {
                cout << "Error: Price cannot be negative!" << endl;
            }
        }
};


int main() {
    // Creating Product objects
    Product product1("Laptop", 999.99);
    Product product2("Phone", 499.50);

    // Displaying product details
    cout<<endl;
    cout << "The name of Product 1: " << product1.getName() << endl;
    cout<< "The price of Product 1: $" << product1.getPrice() << endl;
    cout<<endl;

    // Modifying product price with setter
    product2.setPrice(550.00);
    cout << "Updated Price of Product 2: $" << product2.getPrice() << endl;

    return 0;
}
