#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()  
{
   /* Write your code here */
   char ch = '\0';
   printf("Enter a character:\n");
   scanf("%c", &ch);

    if (isalpha(ch)) {
        if (isupper(ch)){
            printf("Upper case letter");
        } else {
            printf("Lower case letter");
        }
    } else if (isdigit(ch)) {
        printf("Digit");
    } else {
        printf("Other character");
    }

   return 0;   
}