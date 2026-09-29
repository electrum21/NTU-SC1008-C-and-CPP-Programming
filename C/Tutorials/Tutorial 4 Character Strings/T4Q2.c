#include <stdio.h>
#include <string.h>

char *stringncpy(char *s1, char *s2, int n); 

int main() {
    char targetStr[40], sourceStr[40], *target, *p; 
    int length;
    printf("Enter the string: \n"); 
    fgets(sourceStr, 40, stdin);
    if (p=strchr(sourceStr,'\n'))  // remove newline character. strchr() returns NULL if '\n' not found. p is pointer to the first occurrence of '\n'.
        *p = '\0'; 
    printf("Enter the number of characters: \n"); 
    scanf("%d", &length);
    target = stringncpy(targetStr, sourceStr, length); 
    printf("stringncpy(): %s\n", target);
    return 0;
}

char *stringncpy(char *s1, char *s2, int n) {
   int sourceLength = strlen(s2);
   int copiedCount = 0;
   while (copiedCount < sourceLength && copiedCount < n) {
        *(s1+copiedCount) = *(s2+copiedCount);
        copiedCount++;
   }
   while (copiedCount < n) {
        *(s1+copiedCount) = '\0';
        copiedCount++;
   }
   return s1;
}
