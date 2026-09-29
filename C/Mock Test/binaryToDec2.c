#include <stdio.h>
#include <string.h>

int main() {
    char bin[50];
    int decVal = 0;
    int length, i;

    printf("Enter a binary number: \n");
    scanf("%49s", bin); // Prevents buffer overflow

    length = strlen(bin); 

    for (i = 0; i < length; i++) {
        if (bin[i] == '1') {
            decVal += (1 << (length - i - 1)); // Bitwise shift for power of 2
        }
    }

    printf("The equivalent decimal number: %d\n", decVal);
    return 0;
}
