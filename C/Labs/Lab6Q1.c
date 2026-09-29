#include <stdio.h>

int rNumDigits1(int num);
void rNumDigits2(int num, int *result);

int main() {
    int number, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rNumDigits1(): %d\n", rNumDigits1(number));
    rNumDigits2(number, &result);
    printf("rNumDigits2(): %d\n", result);
    return 0;
    }

int rNumDigits1(int num) {
    if (num < 10){
        return 1;
    } else {
        return rNumDigits1(num/10) + 1; // Because of integer division in C, 123 / 10 becomes 12, effectively "chopping off" the last digit.
        // +1 because each time the function calls itself, it represents one digit being counted.
    }
}

void rNumDigits2(int num, int *result) {
    if (num < 10){
        *result = 1; // When the function finally reaches a single digit (e.g., num is 1), 
        // it goes to the memory address stored in result and sets that value to 1.
    } else {
        rNumDigits2(num/10, result); // As the recursion "unwinds" (finishes), each previous function call resumes. 
        // After the recursive call rNumDigits2(num / 10, result) finishes, the next line *result += 1; runs.
        // *result += 1; use this or
        (*result)++; // this to increment the value at the memory address pointed to by result.
    }
}

