#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

bool isZero(float num, float epsilon = 1e-6) {
    return fabs(num) < epsilon;  // Check if num is very close to 0
}

bool isInteger(float k)
{
  return std::floor(k) == k;
}

// Function to get a valid float input
float getValidFloat() {
    float value;
    while (true) {
        cin >> value;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid float number:" << std::endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

template <typename T>
bool isZero(T num) {
    if (numeric_limits<T>::is_integer) {
        return num == 0;
    }
    return fabs(num) < 1e-6;
}

template <typename T>
T calculate(T val1, T val2, char op) {
    switch(op) {
        case '+': return val1+val2;
        case '-': return val1-val2;
        case '*': return val1*val2;
        case '/':
        if (isZero(val2)) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return val1 / val2;
    
        default: return 0;
        }
}

int main() {
    float value1, value2;
    char op;

    cout << "Enter value1:" << endl;
    value1 = getValidFloat();
    cout << "Enter value2:" << endl;
    value2 = getValidFloat();
    cout << "Enter operator:" << endl;
    cin >> op;


    if (isInteger(value1) && isInteger(value2)) {
        int ivalue1 = (int)value1;
        int ivalue2 = (int)value2;
        cout << "Result = " << calculate(ivalue1, ivalue2, op) << endl;
    } else {
        cout << "Result = " << calculate(value1, value2, op) << endl;
    }


    return 0;
}
