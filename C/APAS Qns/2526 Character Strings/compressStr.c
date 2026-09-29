#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compressStr(char *str);
int main() 
{
   char str[40]; 
         
   printf("Enter a sequence of characters: \n"); 
   scanf("%s", str);
   printf("compressStr(): ");
   compressStr(str);
   return 0;
}
void compressStr(char *str)
{
    int lenstr = strlen(str);
    
    int letterCount = 1;
    
    for (int i = 0; i < lenstr; i++) {
        if (i < lenstr-1 && str[i] == str[i+1]){
            letterCount++;
        } else if (letterCount>1) {
            printf("[%d%c]", letterCount, str[i]);
            letterCount = 1;
        } else if (letterCount == 1) {
            printf("%c", str[i]);
        }
    }
}