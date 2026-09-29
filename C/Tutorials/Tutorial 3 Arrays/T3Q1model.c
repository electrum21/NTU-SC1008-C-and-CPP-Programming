#include <stdio.h>
#include <stdlib.h> // for rand function
#include <time.h>

void getFrequency(int histogram[10], int n);
void printFrequency(int histogram[10]);

int main() {
    int frequencies[10];
    int total;

    printf("Please input the number of random numbers: ");
    scanf("%d", &total);
    srand(time(NULL)); // generate a seed number

    getFrequency(frequencies, total);
    printFrequency(frequencies);

    return 0;
}

void getFrequency(int histogram[10], int n) {

    int count;
    // int category;

    for (count = 0; count < 10; count++) {
        histogram[count] = 0;
    }

    for (count = 0; count < n; count++) {
        histogram[(rand() % 100) / 10]++; // generate a random number between 0 and 99
        /* or category = (rand()%100)/10;
            histogram[category]++*/
    }

}


void printFrequency(int histogram[10]) {
    int count, index;

    for (count = 0; count < 10; count++) {
        printf("%2d - %2d |", count * 10, count * 10 + 9);
        for (index = 0; index < histogram[count]; index++) {
            putchar('*');
        }
        printf("\n");
    }
}