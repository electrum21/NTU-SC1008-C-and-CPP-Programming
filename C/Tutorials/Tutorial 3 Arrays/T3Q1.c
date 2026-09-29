#include <stdio.h>
#include <stdlib.h> // for rand function

int main() {
    int distributions[10] = {0};
    int n;
    printf("Enter the value n:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int randomNumber = rand() % 100; // generate a random number between 0 and 99
        
        /*
        if (randomNumber < 10) {
            distributions[0] += 1;
        } else if (randomNumber < 20) {
            distributions[1] += 1;
        } else if (randomNumber < 30) {
            distributions[2] += 1;
        } else if (randomNumber < 40) {
            distributions[3] += 1;
        } else if (randomNumber < 50) {
            distributions[4] += 1;
        } else if (randomNumber < 60) {
            distributions[5] += 1;
        } else if (randomNumber < 70) {
            distributions[6] += 1;
        } else if (randomNumber < 80) {
            distributions[7] += 1;
        } else if (randomNumber < 90) {
            distributions[8] += 1;
        } else  {
            distributions[9] += 1;
        }
            */
           
        // the above if-else block can be replaced with:
        distributions[randomNumber / 10]++;   
    }
    
    /*
    printf("0-9       |");
    for (int i = 0; i < distributions[0]; i++) {
        printf("*");
    }
    printf("\n");
    printf("10-19     |");
    for (int i = 0; i < distributions[1]; i++) {
        printf("*");
    }
    printf("\n");
    printf("20-29     |");
    for (int i = 0; i < distributions[2]; i++) {
        printf("*");
    }
    printf("\n");
    printf("30-39     |");
    for (int i = 0; i < distributions[3]; i++) {
        printf("*");
    }
    printf("\n");
    printf("40-49     |");
    for (int i = 0; i < distributions[4]; i++) {
        printf("*");
    }
    printf("\n");
    printf("50-59     |");
    for (int i = 0; i < distributions[5]; i++) {
        printf("*");
    }
    printf("\n");
    printf("60-69     |");
    for (int i = 0; i < distributions[6]; i++) {
        printf("*");
    }
    printf("\n");
    printf("70-79     |");
    for (int i = 0; i < distributions[7]; i++) {
        printf("*");
    }
    printf("\n");
    printf("80-89     |");
    for (int i = 0; i < distributions[8]; i++) {
        printf("*");
    }
    printf("\n");
    printf("90-99     |");
    for (int i = 0; i < distributions[9]; i++) {
        printf("*");
    }
    printf("\n");
    */

    // the above print block can be replaced with:
    for (int i = 0; i < 10; i++) {
        printf("%2d-%2d     |", i * 10, i * 10 + 9);
        for (int j = 0; j < distributions[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

}