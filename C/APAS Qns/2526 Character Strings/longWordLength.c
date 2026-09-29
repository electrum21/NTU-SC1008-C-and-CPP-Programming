#include <stdio.h> 
#include <string.h> 

int longWordLength(char *s); 
int main()  
{ 
   char str[80], *p; 
    
   printf("Enter a string: \n"); 
   fgets(str, 80, stdin); 
   if (p=strchr(str,'\n')) *p = '\0';    
   printf("longWordLength(): %d\n", longWordLength(str));     
   return 0; 
} 

int longWordLength(char *s) 
{ 
   int wholeStringLength = strlen(s);
   int indivWordLength = 0;
   int longestWordLength = 0;

   for (int i = 0; i < wholeStringLength; i++) {
      char chr = s[i];
      // Check if character is a letter
      if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z')) {
         indivWordLength++;
      } else {
         // We hit a non-letter: check if current word is the longest
         if (indivWordLength > longestWordLength) {
            longestWordLength = indivWordLength;
         }
         // Reset length for the next word
         indivWordLength = 0;
      }
   }

   // Crucial: check one last time in case the string ends on a word
   if (indivWordLength > longestWordLength) {
      longestWordLength = indivWordLength;
   }

   return longestWordLength;
}