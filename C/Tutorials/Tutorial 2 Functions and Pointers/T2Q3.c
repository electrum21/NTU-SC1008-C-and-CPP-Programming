#include <stdio.h>
#define INIT_VALUE 999 

int extOddDigits1(int num);
void extOddDigits2(int num, int *result); 

int main() {
    int number, result = INIT_VALUE;
    printf("Enter a number: \n"); 
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n", extOddDigits1(number)); 
    extOddDigits2(number, &result); 
    printf("extOddDigits2(): %d\n", result);
    return 0;
}

int extOddDigits1(int num) {
    int oddNum = 0;
    int found = 0;
    int multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 1) {
            oddNum += multiplier * digit;
            multiplier *= 10;
            found = 1;
        }
        num /= 10;
    }
    return found ? oddNum : -1;
}

void extOddDigits2(int num, int *result) {
    *result = 0;
    int found = 0;
    int multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 1) {
            (*result) += multiplier * digit;
            multiplier *= 10;
            found = 1;
        }
        num /= 10;
    }
    if (!found) {
        (*result) = -1;
    }
}
