#include <stdio.h>

int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

int main() {
    int num, digit, result = -1;
    printf("Enter the number: \n"); 
    scanf("%d", &num); 
    printf("Enter k position: \n"); 
    scanf("%d", &digit);
    printf("digitValue1(): %d\n", digitValue1(num, digit)); 
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result); 
    return 0;
}

// int digitValue1(int num, int k) {
//     for (int i = 0; i < k-1; i++) { // loop to remove last k-1 digits
//         num /= 10; // integer division, e.g. 1234567 / 10 = 123456
//     }
//     num = num % 10; // get the last digit
//     return num;
// }

int digitValue1(int num, int k) {
    int i, r;
    for (i= 0; i < k; i++) {
        r = num % 10;
        num /= 10;
    }
    return r;
}

// void digitValue2(int num, int k, int *result) {
//     for (int i = 0; i < k-1; i++) {
//         (num) /= 10; // integer division, e.g. 1234567 / 10 = 123456
//     }
//     *result = num % 10; // get the last digit and store it in the address pointed by result
// }

void digitValue2(int num, int k, int *result) {
    int i, r;
    for (int i = 0; i < k; i++) {
        r = num % 10;
        num /= 10; // integer division, e.g. 1234567 / 10 = 123456
    }
    *result = r; // get the last digit and store it in the address pointed by result
}