#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    int octal = 0;
    int powerPosition = 0;
    int lastDigit = 0;
    int decimal = 0;

    printf("Enter a decimal number:\n");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        int remainder = decimal % 8;
        octal += remainder * pow(10, powerPosition);
        decimal /= 8;
        powerPosition++;
    }

    printf("The equivalent octal number: %d", octal);

    return 0; 
}