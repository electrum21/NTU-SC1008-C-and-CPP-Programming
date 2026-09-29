#include <stdio.h> 
#include <string.h> 

void extractFirstChar(char *str1, char *str2); 

int main() { 
   char str1[80], str2[80], *p; 
    
   printf("Enter a string: \n"); 
   fgets(str1, 80, stdin); 
   if (p=strchr(str1,'\n')) *p = '\0';   
   extractFirstChar(str1, str2);  
   printf("extractFirstChar(): %s\n", str2); 
   return 0; 
}     

void extractFirstChar(char *str1, char *str2) { 
    if (*str1 != '\0') {
        *str2 = *str1;
        str1++;
        str2++;
    }
    while (*str1 != '\0') {
        if (*(str1 - 1) == ' ') {
            *str2 = *str1;
            str2++;
        }
        str1++;
    }
    *str2 = '\0';
} 