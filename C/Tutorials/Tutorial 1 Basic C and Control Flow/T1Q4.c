#include <stdio.h> 
#include <math.h>

// int main() {
//     float x;
//     float result = 1;
//     float numerator;
//     printf("Enter x:\n");
//     scanf("%f", &x);
//     for (int i = 1; i < 11; i++) {
//         numerator = (pow(x, i));
//         int denominator = 1;
//         for (int j = 0; j < i; j++) {
//             denominator *= (j+1);
//         }
//         result += (numerator/denominator);
//     }
//     printf("Result = %.2f", result);
//     return 0;
// }

int main() {
    int n, denominator = 1;
    float x, result = 1.0, numerator = 1.0;
    
    printf("Please enter the value of x: \n");
    scanf("%f", &x);

    for (n = 1; n <= 10; n++) {
        denominator *= n; // more efficient compared to above program
        // because denominator is always increasing by 1, just reuse from previous loop, no need nested loops
        numerator *= x;
        result += numerator/denominator;
    }
    printf("Result = %.2f\n", result);
    return 0;
}