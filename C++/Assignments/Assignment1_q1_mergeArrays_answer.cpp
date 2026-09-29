#include <iostream>
#include <string>
using namespace std;


////// To-do: Write Your Code Here//////////////
// Template function mergeArrays() to merge two arrays
template <typename T>
T* mergeArrays(T* arr1, int size1, T* arr2, int size2, T*& mergedArray){ // notice the T*& mergedArray. 
    // The & is crucial. It allows the function to "reach back" into main() and update the pointer there to point to the new memory address.
    int i, j;
    mergedArray = new T[size1 + size2];
    for (i = 0; i < size1; i++){
        mergedArray[i] = arr1[i];
    }
    for (j = 0; j < size2; j++){
        mergedArray[size1 + j] = arr2[j];
    }

    return mergedArray;
}

////// To-do: Write Your Code Here//////////////
// Template function printAndDeallocate() to print and deallocate the merged array
template <typename T>
void printAndDeallocate(T* mergedArray, int size){
    cout << "Merged Array: ";
    if (mergedArray != nullptr) {
        for (int i = 0; i < size; i++) {
            cout << mergedArray[i];
            if (i < size - 1) {
                cout << " ";
            }
        }
        cout << endl;
        delete[] mergedArray;
    } else {
        cout << "Empty array" << endl;
    }
}


int main() {
    cout << "1) Merge Arrays" << endl;
    cout << "2) Exit" << endl;
 
    int cmd;
    do {
        cout << "Enter command: " << endl;
        cin >> cmd;
 
        switch (cmd) {
        case 1: {
            int size1, size2;
            cout << "Enter size of first array: " << endl;
            cin >> size1;
            double* arr1 = new double[size1];
            cout << "Enter elements of first array: " << endl;
            for (int i = 0; i < size1; i++)
                cin >> arr1[i];
 
            cout << "Enter size of second array: " << endl;
            cin >> size2;
            double* arr2 = new double[size2];
            cout << "Enter elements of second array: " << endl;
            for (int i = 0; i < size2; i++)
                cin >> arr2[i];
 
            double* mergedArray = nullptr;
            mergeArrays(arr1, size1, arr2, size2, mergedArray);
            printAndDeallocate(mergedArray, size1 + size2);
 
            delete[] arr1;
            delete[] arr2;
            break;
        }
        case 2:
            break;
        default:
            cout << "Unknown cmd: " << cmd << endl;
        }
    } while (cmd != 2);
 
    return 0;
}