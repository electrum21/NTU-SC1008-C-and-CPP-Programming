#include <stdio.h> 
#include <string.h> 

void compareChar(char *str1, char *str2, char *str3); 

int main() { 
   char str1[80],str2[80],str3[80]; 
    
   printf("Enter the first string: \n"); 
   scanf("%s",str1); 
   printf("Enter the second string: \n"); 
   scanf("%s",str2); 
   compareChar(str1, str2, str3); 
   printf("compareChar(): %s\n", str3); 
   return 0; 
} 

void compareChar(char *str1, char *str2, char *str3) { 
   
    while (*str1 != '\0' || *str2 != '\0') {
        if (*str1 > *str2) {
            *str3 = *str1;
        } else {
            *str3 = *str2;
        }
        if (*str1 != '\0') str1++;
        if (*str2 != '\0')  str2++;
        str3++;
   }
   
   *str3 = '\0'; // need to null-terminate the result string

}