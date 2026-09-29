#include <stdio.h>
#define SIZE 4

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);// first dimension can be left empty, but second dimension must be specified
// this is because in memory, a 2D array is stored as a contiguous block of memory in row-major order

int main() {
    int sampleArray[SIZE][SIZE] = {{4, 3, 8, 6}, 
                            {9, 0, 6, 5}, 
                            {5, 1, 2, 4}, 
                            {9, 8, 3, 7}};
    
    printf("Original:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", sampleArray[i][j]);
        }
        printf("\n");
    }

    reduceMatrix2D(sampleArray, 4, 4); // only pass in sampleArray because it is already a pointer to the starting address of the 2D array
    // do not pass in sampleArray[][] because it is not a pointer, same applies to sampleArray[] which is not a pointer

    printf("Reduced:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", sampleArray[i][j]);
        }
        printf("\n");
    }
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize) {
    int temp;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) { // initialize j to i+1 to avoid swapping twice or swapping diagonals
            if (i != j && i > j) { // only consider elements below the diagonal
                temp = ar[i][j];
                ar[i][j] = 0;
                ar[j][j] += temp;
            }
        }
    }

}