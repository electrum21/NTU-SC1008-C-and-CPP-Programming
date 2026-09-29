#include <stdio.h> 
int rCountEvenDigits1(int num); 
void rCountEvenDigits2(int num, int *result); 

int main() { 
    int number, result=0; 
    printf("Enter the number: \n"); 
    scanf("%d", &number); 
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number)); 
    rCountEvenDigits2(number, &result); 
    printf("rCountEvenDigits2(): %d\n", result); 
    return 0; 
} 

int rCountEvenDigits1(int num) { 
    if (num < 10 && num % 2 == 0) {
        return 1;
    } else if (num < 10 && num % 2 != 0) {
        return 0;
    }

    int lastDigit = num % 10;
    int remainder = num / 10;

    if (lastDigit % 2 == 0) {
        return 1 + rCountEvenDigits1(remainder);
    } else {
        return 0 + rCountEvenDigits1(remainder);
    }
}

void rCountEvenDigits2(int num, int *result) {
    if (num < 10) {
        if (num % 2 == 0) {
            *result = 1;
        } else {
            *result = 0;
        }
        return;
    }
    

    int lastDigit = num % 10;
    int remainder = num / 10;

    if (lastDigit % 2 == 0) {
        (*result)++; 
    }
    rCountEvenDigits2(remainder, result);
    
}