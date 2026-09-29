#include <stdio.h>
#define SIZE 4

void transpose2D(int ar[][SIZE], int rowSize, int colSize); // first dimension can be left empty, but second dimension must be specified
// this is because in memory, a 2D array is stored as a contiguous block of memory in row-major order

int main() {
    int sampleArray[SIZE][SIZE] = {{1, 2, 3, 4}, 
                            {5, 1, 2, 2}, 
                            {6, 3, 4, 4}, 
                            {7, 5, 6, 7}};
    
    printf("Original:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", sampleArray[i][j]);
        }
        printf("\n");
    }

    transpose2D(sampleArray, 4, 4); // only pass in sampleArray because it is already a pointer to the starting address of the 2D array
    // do not pass in sampleArray[][] because it is not a pointer, same applies to sampleArray[] which is not a pointer

    printf("Transposed:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", sampleArray[i][j]);
        }
        printf("\n");
    }
}

void transpose2D(int ar[][SIZE], int rowSize, int colSize) {
    // tranpose is like switching a[2][1] to a[1][2]. only diagonals dont switch
    int temp;
    for (int i = 0; i < rowSize; i++) {
        for (int j = i + 1; j < colSize; j++) { // initialize j to i+1 to avoid swapping twice or swapping diagonals
            temp = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = temp;
        }
    }

}