#include <stdio.h>
#define SIZE 4

void display(int ar[][SIZE], int rowSize, int colSize){
    int l,m;
    for (l = 0; l < rowSize; l++) {
        for (m = 0; m < colSize; m++) {
            printf("%d", ar[l][m]);
        }
        printf("\n");
    }
}

void transpose2D(int ar[][SIZE], int rowSize, int colSize){
    int h, k;
    int temp;
    for (h = 1; h < rowSize; h++) {
        for (k = 0; k < h; k++) {
            temp = ar[h][k];        // traverse row
            ar[h][k] = ar[k][h];    // process column
            ar[k][h] = temp;        // swap operation
        }
    }
}