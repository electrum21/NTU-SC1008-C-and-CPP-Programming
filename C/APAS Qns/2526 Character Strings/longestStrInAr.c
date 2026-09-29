#include <stdio.h> 
#include <string.h> 
#define N 20 
char *longestStrInAr(char str[N][40], int size, int *length); 
int main() 
{ 
   int i, size, length;   
   char str[N][40], first[40], last[40], *p, *result; 
   char dummychar;   
    
   printf("Enter array size: \n"); 
   scanf("%d", &size); 
   scanf("%c", &dummychar); 
   for (i=0; i<size; i++) { 
      printf("Enter string %d: \n", i+1); 
      fgets(str[i], 40, stdin); 
      if (p=strchr(str[i],'\n')) *p = '\0';   
   }  
   result = longestStrInAr(str, size, &length); 
   printf("longest: %s \nlength: %d\n", result, length);         
   return 0; 
} 
char *longestStrInAr(char str[N][40], int size, int *length) 
{ 
    // No need to set string and compare to it, use indexing instead
    // char longestStr[40];
    // strcpy(longestStr, str[0]);
   int lenLongest = strlen(str[0]);
   int longestIndex = 0;

    for (int i = 1; i < size; i++) {
        if (strlen(str[i]) > lenLongest) {
            lenLongest = strlen(str[i]);
            longestIndex = i;
        }
    }

    *length = lenLongest;
    // Instead of trying to return a local array, you should simply return a pointer 
    // to the specific row within the original str array that holds the longest string.
    // return *longestStr; - WRONG
    return str[longestIndex];
    

} 