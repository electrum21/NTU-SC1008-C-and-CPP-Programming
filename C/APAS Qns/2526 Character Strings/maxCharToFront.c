#include <stdio.h> 
#include <string.h> 

void maxCharToFront(char *str); 

int main()  
{ 
   char str[80], *p; 
    
   printf("Enter a string: \n"); 
   fgets(str, 80, stdin); 
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("maxCharToFront(): ");   
   maxCharToFront(str);  
   puts(str); 
   return 0; 
} 
void maxCharToFront(char *str)  
{ 
   int lenStr = strlen(str);
   int highestASCII = 0;
   int highestIndex = 0;

   for (int i = 1; i < lenStr; i++) {
        if (str[i] > str[highestIndex]) {
            highestIndex = i;
        }
   }

   char maxChar = str[highestIndex];
   for (int i = highestIndex; i > 0; i--) {
        str[i] = str[i-1];
   }

   str[0] = maxChar;
}