#include <stdio.h>

int numDigits1(int num);
void numDigits2(int num, int *result);

int main() {

    int number;
    int result;

    number = 0;
    result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);

    printf("numDigits1(): %d\n", numDigits1(number));

    numDigits2(number, &result);
    printf("numDigits2(): %d\n", result);

    return 0;
}

int numDigits1(int num) {
    int count = 0;
    do {
        count++;
        num = num/10;
    } while (num > 0);
    return count;
}

void numDigits2(int num, int *result) {
    do {
        (*result)++; // The parentheses are required because of operator precedence. 
        // In C, the ++ operator has higher priority than the * (dereference) operator.
        // *result++ would increment the address (the pointer itself).
        // (*result)++ increments the value stored at that address.
        num = num/10;
    } while (num > 0);
}