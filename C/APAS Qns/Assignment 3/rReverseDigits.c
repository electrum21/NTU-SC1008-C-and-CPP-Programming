#include <stdio.h> 

void rReverseDigits(int num, int *result); 
int main() { int result=0, number; 
    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    rReverseDigits(number, &result); 
    printf("rReverseDigits(): %d\n", result); 
    return 0; 
} 

void rReverseDigits(int num, int *result) {
    if (num == 0) {
        return; // Base case: nothing left to process
    }

    // 1. Take the last digit: (e.g., 123 -> 3)
    int lastDigit = num % 10;
    
    // 2. Shift existing result left and add the new digit
    // (e.g., if result was 1, it becomes 10 + 3 = 13)
    *result = (*result * 10) + lastDigit;

    // 3. Recurse with the rest of the number
    rReverseDigits(num / 10, result);
}