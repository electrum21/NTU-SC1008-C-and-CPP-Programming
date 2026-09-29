#include <stdio.h> 
#include <math.h> 

int main()  
{         
    int binary = 0;
    int powerPosition = 0;
    int lastDigit = 0;
    int decimal = 0;

    printf("Enter a binary number:\n");
    scanf("%d", &binary);
    
    while (binary > 0) {
        lastDigit = binary % 10;
        decimal += lastDigit * pow(2,powerPosition);
        binary /= 10;
        powerPosition++;
    }

    printf("The equivalent decimal number: %d", decimal);

    return 0;
}