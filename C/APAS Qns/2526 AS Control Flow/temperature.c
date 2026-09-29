#include <stdio.h>

int main() {

    int fahrenheit = 0;
    float celsius = 0;
    float fraction = (float)5/(float)9; // VERY IMPORTANT, NEEDS TO BE 5.0 DIVIDED BY 9.0
    // OTHERWISE, 5/9 WILL BE TAKEN AS INTEGER DIVISION, WHERE THE RESULT BECOMES 0
   
    while (fahrenheit != -1) {
        printf("Enter the temperature in degree F:\n");
        scanf("%d", &fahrenheit);
        if (fahrenheit == -1) {
            break;
        }
        celsius = fraction * (fahrenheit - 32);
        printf("Converted degree in C: %.2f\n", celsius);
    }

    return 0;
}