#include <stdio.h>

int main() {

    int noLines;
    int sum;
    int count;
    int nextNumber;
    
    noLines = 0;
    printf("Enter number of lines:\n");
    scanf("%d", &noLines);

    for (int i = 1; i < (noLines + 1); i++) {
        sum = 0;
        count = 0;
        nextNumber = 0;
        printf("Enter line %d (end with -1):\n", i);
        while (nextNumber != -1) {
            scanf("%d", &nextNumber);
            if (nextNumber == -1) {
                break;
            }
            sum += nextNumber;
            count++;
        }
        printf("Average = %.2f\n", (float)sum / (float)count);        
    }

    return 0;
}