#include <stdio.h> 
#include <math.h> 
#include <string.h> 
#include <ctype.h>

int hexStrToDec(char *hex); 
int main() 
{ 
   int num; 
   char hex[100]; 
    
   printf("Enter a hexadecimal number: \n");  
   scanf("%s",&hex); 
   num=hexStrToDec(hex); 
   printf("hexStrToDec(): %d\n", num); 
   return 0; 
} 
int hexStrToDec(char *hex) 
{   
    // Testing code, you know that A is 65.
    // So to get A decimal value of 10, need to subtract 55.
    // char test = 'A';
    // printf("%d\n", (int)test);
   
    int hexlen = strlen(hex);
    int exp = hexlen - 1;
    int sum = 0;
    int value = 0;

    for (int i = 0; i < hexlen; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            value = hex[i] - '0';
            sum += (value * pow(16, exp));
        } else {
            value = toupper(hex[i]) - 55;
            sum += (value * pow(16, exp));
        }
        exp--;
    }

    return sum;

}