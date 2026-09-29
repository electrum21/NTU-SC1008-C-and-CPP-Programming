#include <stdio.h> 
#include <string.h>

int octStrTodec(char *str); 
int main() 
{ 
   char str[20],*sp; 
   int num; 
    
   printf("Enter an octal number: \n"); 
   scanf("%s",str); 
   num=octStrTodec(str); 
   printf("octStrTodec(): %d\n",num); 
   return 0; 
} 
int octStrTodec(char *str)  
{ 
    int lenStr = strlen(str);
    int power = lenStr;
    int dec = 0;
    for (int i = 0; i < lenStr; i++) {
        int multiplier = 1;
        for (int j = 0; j < power -1; j++) {
            multiplier *= 8;
        }
        power--;
        dec += ((str[i] - '0') * multiplier); 
    }
    return dec;
}