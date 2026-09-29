#include <stdio.h>
int rDigitPos1(int num, int digit);
void rDigitPos2(int num, int digit, int *pos);

// Note: Specified digit is a positive integer, meaning digit cannot be 0.

int main() {
    int number, digit, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    printf("rDigitPos1(): %d\n", rDigitPos1(number, digit));
    rDigitPos2(number, digit, &result);
    printf("rDigitPos2(): %d\n", result);
    return 0;
}

int rDigitPos1(int num, int digit) {
    if (num == 0) {
        return 0;
    }
    if (num % 10 == digit) {
        return 1;
    } else {
        int position = rDigitPos1(num/10, digit);
        if (position > 0) {
            return position + 1;
        } 
        return 0;
    }
}

void rDigitPos2(int num, int digit, int *pos) {
    if (num == 0) {
        *pos = 0; // Base case: digit not found
        return; // Requires return to avoid falling through to the next checks, MUST return to stop the recursion
    }
    if (num % 10 == digit) { 
        *pos = 1; // Found the digit at the current position
    } else {
        rDigitPos2(num/10, digit, pos); // Recursive call to check the next digit
        // use pos and not &pos because pos is already a pointer, not *pos because we are not dereferencing it here.
        // use pos because we want to pass the same memory address down the recursive calls.
        if (*pos > 0) {
            (*pos)++; // Only increment if the digit was found (pos > 0)
        // If *pos is 0, it means the digit was never found
        }
    }
}