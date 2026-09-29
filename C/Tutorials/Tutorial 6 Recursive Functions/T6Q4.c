#include <stdio.h>
#define SIZE 20

int rCountArray(int array[], int n, int a);

int main() {
    int array[SIZE];
    int index, count, target, size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    count = rCountArray(array, size, target);
    printf("rCountArray(): %d\n", count);
    return 0;
}

// // my original code
// int rCountArray(int array[], int n, int a){
//     if (n <= 1) {
//         return (array[0] == a); // when array has been cut to size 1, just return whether the only element matches target a
//     }
//     if (array[0] == a) { // if first element in array matches target a,
//         return 1 + rCountArray(array+1, n-1, a); // return 1 plus the count from the rest of the array. array+1 points to the next element
//     } else {
//         rCountArray(array+1, n-1, a); // else just return the count from the rest of the array. array+1 points to the next element
//     }
// }

int rCountArray(int array[], int n, int a){
    if (n == 1) {
        if (array[0] == a) {
            return 1;
        } else {
            return 0;
        }

        if (array[0] == a) {
            return 1 + rCountArray(&array[1], n-1, a);
        } else {
            return rCountArray(&array[1], n-1, a);
        }
    }
}