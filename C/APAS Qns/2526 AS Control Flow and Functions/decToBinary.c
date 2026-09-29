#include <stdio.h> 
#include <math.h> 
int main()  
{         
    int binary = 0;
    int powerPosition = 0;
    int lastDigit = 0;
    int decimal = 0;

    printf("Enter a decimal number:\n");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * pow(10, powerPosition);
        decimal /= 2;
        powerPosition++;
    }

    printf("The equivalent binary number: %d", binary);

    return 0;
}