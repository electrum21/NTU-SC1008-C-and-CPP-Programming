#include <stdio.h> 
#include <string.h> 

int strOverWrite(char *s1, char *s2, int pos); 

int main() 
{  
   char s1[40], s2[40], *p; 
   int pos, total; 
 
   printf("Enter string 1: \n"); 
   fgets(s1, 80, stdin); 
   if (p=strchr(s1,'\n')) *p = '\0';  
   printf("Enter string 2: \n"); 
   fgets(s2, 80, stdin); 
   if (p=strchr(s2,'\n')) *p = '\0';  
   printf("Enter position: \n"); 
   scanf("%d", &pos); 
   total = strOverWrite(s1, s2, pos); 
   printf("strOverWrite(): %s %d\n", s1, total); 
   return 0; 
} 

int strOverWrite(char *s1, char *s2, int pos) 
{ 
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    int count = 0;

    // We only loop for the length of s2, 
    // but we must stop if we hit the end of s1
    for (int i = 0; i < length2; i++) {
        if ((pos + i) < length1) { 
            s1[pos + i] = s2[i];
            count++; // Only increment if we actually wrote to s1
        }
    }

    return count; [cite: 4]
}