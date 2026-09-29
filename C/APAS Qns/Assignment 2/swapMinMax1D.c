#include <stdio.h>

void swapMinMax1D(int ar[], int size);

int main() {
    int ar[50],i,size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}

void swapMinMax1D(int ar[], int size) {
    int minIndex = 0;
    int maxIndex = 0;
    int min = ar[0];
    int max = ar[0];
    for (int i = 0; i < size; i++) {
        if (ar[i] >= max) {
            maxIndex = i;
            max = ar[i];
        }
        if (ar[i] <= min) {
            minIndex = i;
            min = ar[i];
        }
    }
    int temp = ar[minIndex];
    ar[minIndex] = ar[maxIndex];
    ar[maxIndex] = temp;
}