#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
#include <numeric>   // for std::accumulate
#include <iomanip>

int main() {
    // Declare a vector to store daily sales.
    std::vector<int> dailySales;
    
    // TO-DO: Add seven daily sales values to the vector: 
    //         120, 200, 150, 80, 90, 220, 100
    int salesData[] = {120, 200, 150, 80, 90, 220, 100};
    for (int s : salesData) {
        dailySales.push_back(s);
    }

    // TO-DO: Print all sales values by using an iterator
    std::cout << "Daily Sales: ";
    std::vector<int>::iterator it;
    for (it = dailySales.begin(); it != dailySales.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 4. Calculate the average of the sales values and print it
    // std::accumulate sums up the range [cite: 217]
    double sum = accumulate(dailySales.begin(), dailySales.end(), 0); // std::accumulate is a standard library function used to compute the sum (or any other binary reduction) of all elements in a given range
    double average = sum / dailySales.size(); // Vectors: Returns the actual number of items currently stored in a std::vector.
    std::cout << std::fixed << std::setprecision(3); // Match expected output format 137.143
    std::cout << "Average Sales: " << average << std::endl;

    // 5. Sort the vector in ascending order using std::sort 
    sort(dailySales.begin(), dailySales.end());

    // 6. Print all the sorted sales values by using an iterator
    std::cout << "Sorted Sales: ";
    for (it = dailySales.begin(); it != dailySales.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;    
    return 0;
}
